struct ListNode *hasCycle(struct ListNode *head) {//快慢指针法
	if (head == NULL) return head;
	struct ListNode* slow = head;
	struct ListNode* fast = head->next;
	while (slow != fast)
	{
		if (fast == NULL || fast->next == NULL)
		{
			return NULL;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return fast;
}
struct ListNode *detectCycle(struct ListNode *head) {
	struct ListNode* meet = hasCycle(head);
	if (meet == NULL)
	{
		return NULL;
	}
	else
	{
		meet = meet->next;
		while (1)//一点有相交节点所以可以写成1
		{
			if (meet == head)
			{
				return meet;
			}
			meet = meet->next;
			head = head->next;
		}
	}
	return;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)//拆解链表法
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
	if (b != a)
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
struct ListNode *hasCycle(struct ListNode *head) {
	if (head == NULL || head->next == NULL) return false;
	struct ListNode* slow = head;
	struct ListNode* fast = head->next;
	while (slow != fast)
	{
		if (fast == NULL || fast->next == NULL)
		{
			return NULL;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return fast;
}
struct ListNode *detectCycle(struct ListNode *head) {
	struct ListNode* h = NULL;
	struct ListNode* Union = NULL;
	struct ListNode* meet = hasCycle(head);
	if (meet == NULL)
	{
		return NULL;
	}
	else
	{
		h = meet->next;
		meet->next = NULL;
		Union = getIntersectionNode(head, h);
		return Union;
	}
}
typedef struct RandomListNode RLNode;
struct RandomListNode *copyRandomList(struct RandomListNode *head)//复制带随机指针的链表
{
	if (head == NULL) return head;
	RLNode* cur = head;
	while (cur)
	{
		RLNode* next = cur->next;
		RLNode* copy = (RLNode*)malloc(sizeof(RLNode));
		copy->label = cur->label;
		cur->next = copy;
		copy->next = next;

		cur = next;
	}
	cur = head;
	while (cur)
	{
		RLNode* copy = cur->next;
		if (cur->random)
		{
			copy->random = cur->random->next;
		}
		else
		{
			copy->random = NULL;
		}

		cur = copy->next;
	}
	RLNode* newhead, *tail;
	newhead = tail = (RLNode*)malloc(sizeof(RLNode));
	cur = head;
	while (cur)
	{
		RLNode* copy = cur->next;
		RLNode* next = copy->next;

		tail->next = copy;
		tail = tail->next;

		cur->next = next;
		cur = next;
	}
	RLNode* Nhead = newhead->next;
	free(newhead);

	return Nhead;
}