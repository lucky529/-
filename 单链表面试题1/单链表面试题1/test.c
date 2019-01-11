struct ListNode* removeElements(struct ListNode* head, int val)//�Ƴ�����Ԫ��
{
	if (head == NULL) return head;
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{
		struct ListNode* next = cur->next;
		if (cur->val == val)
		{
			if (prev == NULL)
			{
				head = next;
			}
			else
			{
				prev->next = next;
			}
			free(cur);
			cur = next;
		}
		else
		{
			prev = cur;
			cur = next;
		}
	}
	return head;
}

struct ListNode* reverseList(struct ListNode* head)//�ݹ鷴ת
{
	if (head == NULL || head->next == NULL) return head;
	struct ListNode* h = reverseList(head->next);
	head->next->next = head;
	head->next = NULL;

	return h;
}

struct ListNode* reverseList(struct ListNode* head)//������ת
{
	struct ListNode* prev = NULL;
	struct ListNode* cur = head;
	struct ListNode* next;
	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}

struct ListNode* reverseList(struct ListNode* head)//ȡ�ڵ�ʽ��ת
{
	if (head == NULL || head->next == NULL) return head;
	struct ListNode* newhead = NULL;
	while (head != NULL)
	{
		struct ListNode* next = head->next;
		head->next = newhead;
		newhead = head;
		head = next;
	}
	return newhead;
}

struct ListNode* middleNode(struct ListNode* head)//��������������м���
{
	static struct ListNode* a[100] = { 0 };
	int t = 0;
	if (head == NULL || head->next == NULL) return head;
	while (head != NULL)
	{
		a[t] = head;
		head = head->next;
		++t;
	}
	t = t / 2;
	return a[t];
}

struct ListNode* middleNode(struct ListNode* head)//����һ�����м���
{
	struct ListNode* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	count = count / 2;
	cur = head;
	while (count--)
	{
		cur = cur->next;
	}
	return cur;
}

struct ListNode* middleNode(struct ListNode* head)//����ָ�����м���
{
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast&& fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)//��������ĵ�k�����
{
	ListNode* fast = pListHead;
	ListNode* slow = pListHead;
	while (k--)
	{
		if (fast)
		{
			fast = fast->next;
		}
		else
		{
			return NULL;
		}
	}
	while (fast != NULL)
	{
		fast = fast->next;
		slow = slow->next;
	}

	return slow;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)//�ϲ������������� 
{
	struct ListNode* head;
	struct ListNode* tail;
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;
	if (l1->val < l2->val)
	{
		head = l1;
		l1 = l1->next;
	}
	else
	{
		head = l2;
		l2 = l2->next;
	}
	tail = head;
	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			tail->next = l1;
			tail = tail->next;
			l1 = l1->next;
		}
		else
		{
			tail->next = l2;
			tail = tail->next;
			l2 = l2->next;
		}
	}
	if (l1)
	{
		tail->next = l1;
	}
	if (l2)
	{
		tail->next = l2;
	}

	return head;
}

ListNode* partition(ListNode* pHead, int x) //����ָ�
{
	ListNode* cur = pHead;
	struct ListNode* lesstail = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* greathead = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* ltail = lesstail;
	struct ListNode* ghead = greathead;
	while (cur)
	{
		if (cur->val < x)
		{
			ltail->next = cur;
			ltail = ltail->next;
		}
		else
		{
			ghead->next = cur;
			ghead = ghead->next;
		}
		cur = cur->next;
	}
	ltail->next = greathead->next;
	ghead->next = NULL;
	pHead = lesstail->next;

	return pHead;
}
