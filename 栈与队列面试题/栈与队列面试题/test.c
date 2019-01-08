bool isValid(char* s)//判断括号是否有效
{
	int len = strlen(s);
	int pos = 0;
	int* ans = (int*)malloc(sizeof(int)*len);
	for (int i = 0; i < len; i++)
	{
		if ((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
		{
			ans[pos++] = s[i];
		}
		if (s[i] == ')')
		{
			if ('(' == ans[pos - 1])
			{
				pos--;
			}
			else
			{
				return false;
			}
		}
		if (s[i] == '}')
		{
			if ('{' == ans[pos - 1])
			{
				pos--;
			}
			else
			{
				return false;
			}
		}
		if (s[i] == ']')
		{
			if ('[' == ans[pos - 1])
			{
				pos--;
			}
			else
			{
				return false;
			}
		}
	}
	if (pos != 0)
	{
		return false;
	}
	return true;
}


typedef int QUDataType;//用队列实现栈
typedef struct QueueNode
{
	struct QueueNode* _next;
	QUDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode* _front; // 队头
	QueueNode* _tail; // 队尾
}Queue;

void QueueInit(Queue* pq)
{
	pq->_front = NULL;
}

void QueueDestory(Queue* pq)
{
	QueueNode* cur = pq->_front;
	while (cur)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}

	pq->_front = NULL;
}

QueueNode* BuyQueueNode(QUDataType x)
{

	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->_data = x;
	newnode->_next = NULL;
	return newnode;
}

void QueuePush(Queue* pq, QUDataType x)
{
	if (pq->_front == NULL)
	{
		pq->_front = pq->_tail = BuyQueueNode(x);
		return;
	}

	pq->_tail->_next = BuyQueueNode(x);
	pq->_tail = pq->_tail->_next;
}

void QueuePop(Queue* pq)
{
	QueueNode* del;
	if (pq->_front == NULL)
		return;
	if (pq->_front == pq->_tail)
	{
		pq->_tail = NULL;
	}
	del = pq->_front;
	pq->_front = pq->_front->_next;
	free(del);
}

QUDataType QueueFront(Queue* pq)
{
	return pq->_front->_data;
}

QUDataType QueueBack(Queue* pq)
{
	return pq->_tail->_data;
}

int QueueEmpty(Queue* pq)
{
	if (pq->_front != NULL)
	{
		return 1;
	}
	return 0;
}

int QueueSize(Queue* pq)
{
	QueueNode* cur = pq->_front;
	int size = 0;
	while (cur)
	{
		size++;
		cur = cur->_next;
	}
	return size;
}

typedef struct {
	Queue q1;
	Queue q2;
} MyStack;

/** Initialize your data structure here. */
MyStack* myStackCreate(int maxSize) {
	MyStack* queue = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&queue->q1);
	QueueInit(&queue->q2);

	return queue;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
	if (QueueEmpty(&obj->q1) != 0)
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
	if (QueueEmpty(&obj->q1) != 0)
	{
		while (QueueSize(&obj->q1) > 1)
		{
			QueuePush(&obj->q2, QueueFront(&obj->q1));
			QueuePop(&obj->q1);
		}

		int front = QueueFront(&obj->q1);
		QueuePop(&obj->q1);

		return front;
	}
	else
	{
		while (QueueSize(&obj->q2) > 1)
		{
			QueuePush(&obj->q1, QueueFront(&obj->q2));
			QueuePop(&obj->q2);
		}

		int front = QueueFront(&obj->q2);
		QueuePop(&obj->q2);

		return front;
	}
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
	if (QueueEmpty(&obj->q1) != 0)
	{
		while (QueueSize(&obj->q1) > 1)
		{
			QueuePush(&obj->q2, QueueFront(&obj->q1));
			QueuePop(&obj->q1);
		}

		int front = QueueFront(&obj->q1);
		QueuePush(&obj->q2, QueueFront(&obj->q1));
		QueuePop(&obj->q2);

		return front;
	}
	else
	{
		while (QueueSize(&obj->q2) > 1)
		{
			QueuePush(&obj->q1, QueueFront(&obj->q2));
			QueuePop(&obj->q2);
		}

		int front = QueueFront(&obj->q2);
		QueuePush(&obj->q1, QueueFront(&obj->q2));
		QueuePop(&obj->q2);
		return front;
	}
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) == 0 && QueueEmpty(&obj->q2) == 0;
}

void myStackFree(MyStack* obj) {
	free(obj);

	obj == NULL;
}

/**
* Your MyStack struct will be instantiated and called as such://实现环形队列
* struct MyStack* obj = myStackCreate(maxSize);
* myStackPush(obj, x);
* int param_2 = myStackPop(obj);
* int param_3 = myStackTop(obj);
* bool param_4 = myStackEmpty(obj);
* myStackFree(obj);
*/
typedef struct {
	int* queue;
	int front;
	int rear;
	int k;
} MyCircularQueue;

/** Initialize your data structure here. Set the size of the queue to be k. */
MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* pcq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	pcq->queue = (int*)malloc(sizeof(int)*(k + 1));
	pcq->front = 0;
	pcq->rear = 0;
	pcq->k = k;

	return pcq;
}

/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if ((obj->rear + 1) % (obj->k + 1) == obj->front)
	{
		return false;
	}

	obj->queue[obj->rear++] = value;
	if (obj->rear == obj->k + 1)
		obj->rear = 0;

	return true;
}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (obj->rear == obj->front)
	{
		return false;
	}

	++obj->front;
	if (obj->front == obj->k + 1)
	{
		obj->front = 0;
	}

	return true;
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
	if (obj->rear == obj->front)
	{
		return -1;
	}
	return obj->queue[obj->front];
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
	if (obj->front == obj->rear)
	{
		return -1;
	}

	if (obj->rear == 0)
	{
		return obj->queue[obj->k];
	}
	else
	{
		return obj->queue[obj->rear - 1];
	}
}

/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
	return obj->front == obj->rear ? true : false;
}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {
	return (obj->rear + 1) % (obj->k + 1) == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj);

	obj = NULL;
}

/**
* Your MyCircularQueue struct will be instantiated and called as such://最小栈的实现
* struct MyCircularQueue* obj = myCircularQueueCreate(k);
* bool param_1 = myCircularQueueEnQueue(obj, value);
* bool param_2 = myCircularQueueDeQueue(obj);
* int param_3 = myCircularQueueFront(obj);
* int param_4 = myCircularQueueRear(obj);
* bool param_5 = myCircularQueueIsEmpty(obj);
* bool param_6 = myCircularQueueIsFull(obj);
* myCircularQueueFree(obj);
*/typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;
	int _capacity;
}Stack;

void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		size_t newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		ps->_a = (STDataType*)realloc(ps->_a, sizeof(STDataType)*newcapacity);
		assert(ps->_a != NULL);
		ps->_capacity = newcapacity;
	}

	ps->_a[ps->_top] = x;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	--ps->_top;
}

STDataType StackTop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	return ps->_a[ps->_top - 1];
}

int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == 0 ? 0 : 1;
}

int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
typedef struct {
	Stack st;
	Stack Minst;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
	MinStack* pst = (MinStack*)malloc(sizeof(MinStack));
	StackInit(&pst->st);
	StackInit(&pst->Minst);

	return pst;
}

void minStackPush(MinStack* obj, int x) {
	if (StackEmpty(&obj->Minst) == 0 || x <= StackTop(&obj->Minst))
	{
		StackPush(&obj->Minst, x);
	}

	StackPush(&obj->st, x);
}

void minStackPop(MinStack* obj) {
	if (StackTop(&obj->st) == StackTop(&obj->Minst))
	{
		StackPop(&obj->Minst);
	}

	StackPop(&obj->st);
}

int minStackTop(MinStack* obj) {

	return StackTop(&obj->st);
}

int minStackGetMin(MinStack* obj) {
	return StackTop(&obj->Minst);
}

void minStackFree(MinStack* obj) {
	StackDestory(&obj->st);
	StackDestory(&obj->Minst);

	obj = NULL;
}

/**
* Your MinStack struct will be instantiated and called as such://使用栈实现队列
* struct MinStack* obj = minStackCreate(maxSize);
* minStackPush(obj, x);
* minStackPop(obj);
* int param_3 = minStackTop(obj);
* int param_4 = minStackGetMin(obj);
* minStackFree(obj);
*/
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;
	int _capacity;
}Stack;

void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		size_t newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		ps->_a = (STDataType*)realloc(ps->_a, sizeof(STDataType)*newcapacity);
		assert(ps->_a != NULL);
		ps->_capacity = newcapacity;
	}

	ps->_a[ps->_top] = x;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	--ps->_top;
}

STDataType StackTop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	return ps->_a[ps->_top - 1];
}

int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == 0 ? 0 : 1;
}

int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
typedef struct {
	Stack Pushst;
	Stack Popst;
} MyQueue;

/** Initialize your data structure here. */
MyQueue* myQueueCreate(int maxSize) {
	MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&queue->Pushst);
	StackInit(&queue->Popst);

	return queue;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->Pushst, x);
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
	if (StackEmpty(&obj->Popst) == 0)
	{
		while (StackEmpty(&obj->Pushst) != 0)
		{
			StackPush(&obj->Popst, StackTop(&obj->Pushst));
			StackPop(&obj->Pushst);
		}
	}
	int front = StackTop(&obj->Popst);
	StackPop(&obj->Popst);

	return front;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
	if (StackEmpty(&obj->Popst) == 0)
	{
		while (StackEmpty(&obj->Pushst) != 0)
		{
			StackPush(&obj->Popst, StackTop(&obj->Pushst));
			StackPop(&obj->Pushst);
		}
	}

	return StackTop(&obj->Popst);
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->Pushst) == 0
		&& StackEmpty(&obj->Popst) == 0;
}

void myQueueFree(MyQueue* obj) {
	StackDestory(&obj->Pushst);
	StackDestory(&obj->Popst);

	obj = NULL;
}

/**
* Your MyQueue struct will be instantiated and called as such:
* struct MyQueue* obj = myQueueCreate(maxSize);
* myQueuePush(obj, x);
* int param_2 = myQueuePop(obj);
* int param_3 = myQueuePeek(obj);
* bool param_4 = myQueueEmpty(obj);
* myQueueFree(obj);
*/