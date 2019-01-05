#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<windows.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;typedef BTNode* QUDataType;
typedef struct QueueNode
{
	struct QueueNode* _next;
	QUDataType _data;
}QueueNode;
typedef struct Queue
{
	QueueNode* _front; // 队头
	QueueNode* _tail; // 队尾
}Queue;void test1();BTNode* BinaryTreeCreate(char* arr, int* pindex);
void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeDestory(BTNode* root);
int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
void BinaryTreeLevelOrder(BTNode* root);

void QueueInit(Queue* pq);//队列用来实现层序遍历
void QueueDestory(Queue* pq);
QueueNode* BuyQueueNode(QUDataType x);
void QueuePush(Queue* pq, QUDataType x);
void QueuePop(Queue* pq);
QUDataType QueueFront(Queue* pq);
QUDataType QueueBack(Queue* pq);
int QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);
void TestQueue();