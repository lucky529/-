ListNode* deleteDuplication(ListNode* pHead)//删除链表中重复的结点
{
	struct ListNode* cur = pHead;
	struct ListNode* prev = NULL;
	struct ListNode* next = cur->next;
	if (cur == NULL || cur->next == NULL) return pHead;
	while (next)
	{
		if (next->val == cur->val)
		{
			next = next->next;
			while (next)
			{
				if (next->val != cur->val)
				{
					break;
				}
				next = next->next;
			}
			while (cur != next)
			{
				struct ListNode* tmp = cur;
				cur = cur->next;
				free(tmp);
			}
			if (prev == NULL)
			{
				pHead = cur;
			}
			else
			{
				prev->next = next;
			}
			if (next)
			{
				next = next->next;
			}
		}
		else
		{
			prev = cur;
			cur = next;
			next = next->next;
		}
	}
	return pHead;
}

struct ListNode* reverselist(struct ListNode* head)//判断一个链表是否为回文链表
{
	if (head == NULL || head->next == NULL) return head;
	struct ListNode* h = reverselist(head->next);
	head->next->next = head;
	head->next = NULL;

	return h;
}
bool isPalindrome(struct ListNode* head) {
	if (head == NULL || head->next == NULL) return true;
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	slow = reverselist(slow);

	while (slow)
	{
		if (slow->val != head->val)
		{
			return false;
		}
		slow = slow->next;
		head = head->next;
	}

	return true;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)//相交链表
{
	int lenA = 0, lenB = 0, gap = 0;
	struct ListNode* a = headA;
	struct ListNode* b = headB;
	struct ListNode* meet = NULL;
	while (a != NULL && a->next != NULL)
	{
		lenA++;
		a = a->next;
	}
	while (b != NULL && b->next != NULL)
	{
		lenB++;
		b = b->next;
	}
	if (b != a)//如果走到链表末尾都不相等，说明俩链表没有相交
	{
		return NULL;
	}
	else
	{
		a = headA; b = headB;
		if (lenA > lenB)
		{
			gap = lenA - lenB;
			while (gap--)
			{
				a = a->next;
			}
		}
		else
		{
			gap = lenB - lenA;
			while (gap--)
			{
				b = b->next;
			}
		}
		while (a && b)
		{
			if (a == b)
			{
				meet = a;
				return a;
			}
			a = a->next;
			b = b->next;
		}
	}
	return meet;
}

bool hasCycle(struct ListNode *head) //判断是否有环
{
	if (head == NULL || head->next == NULL) return false;
	struct ListNode* slow = head;
	struct ListNode* fast = head->next;
	while (slow != fast)
	{
		if (fast == NULL || fast->next == NULL) return false;
		slow = slow->next;
		fast = fast->next->next;
	}
	return true;
}