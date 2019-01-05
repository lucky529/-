#include"test.h"

BTNode* BinaryTreeCreate(char* arr, int* pindex)
{
	if (arr[*pindex] == '#')
	{
		(*pindex)++;
		return NULL;
	}
	else
	{
		BTNode* root = (BTNode*)malloc(sizeof(BTNode));
		root->_data = arr[*pindex];
		root->_left = NULL;
		root->_right = NULL;
		++(*pindex);
		root->_left = BinaryTreeCreate(arr, pindex);
		root->_right = BinaryTreeCreate(arr, pindex);
		return root;
	}
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root != NULL)
	{
		printf("%c", root->_data);
		BinaryTreePrevOrder(root ->_left );
		BinaryTreePrevOrder(root->_right );
	}
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL) return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}

int BinaryTreeSize(BTNode* root)
{
	if (root == NULL) return 0;

	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL) return 0;

	if (k == 1) return 1;

	return BinaryTreeLevelKSize(root->_left, k - 1) 
		+ BinaryTreeLevelKSize(root->_right, k - 1);
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		BinaryTreeDestory(root->_left);
		BinaryTreeDestory(root->_right);
		free(root);
	}
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->_data == x)
	{
		return root;
	}
	BTNode* ret;
	ret = BinaryTreeFind(root->_left, x);
	if (ret)
	{
		return ret;
	}
	return BinaryTreeFind(root->_right, x);
}

void BinaryTreeLevelOrder(BTNode* root)
{
	Queue Q;
	BTNode* front;
	QueueInit(&Q);
	QueuePush(&Q, root);
	while (QueueEmpty(&Q))
	{
		front = QueueFront(&Q);
		printf("%c", front->_data);
		QueuePop(&Q);
		if (front->_left )
		{
			QueuePush(&Q,front->_left);
		}
		if (front->_right )
		{
			QueuePush(&Q,front->_right);
		}
	}
}


//队列部分
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
void test1()
{
	char arr[100] = "ABD##E#H##CF##G##";
	int pindex = 0;
	BTNode* root = BinaryTreeCreate(arr, &pindex);
	BinaryTreePrevOrder(root);
	printf("\n");

	BinaryTreeLevelOrder(root);//层序遍历
	BinaryTreeDestory(root);
	root = NULL;
	system("pause");
}

void TestQueue()
{
	Queue Q;
	QueueInit(&Q);
	QueueDestory(&Q);
	system("pause");
}