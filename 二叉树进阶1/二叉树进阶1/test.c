/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
struct TreeNode* _buildTree(int* preorder, int* index, int* inorder, int start, int end)
{
	if (start > end) return NULL;

	struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	root->val = preorder[(*index)];
	++(*index);

	if (start == end)
	{
		root->left = NULL;
		root->right = NULL;
		return root;
	}

	int rootindex = start;
	while (rootindex <= end)
	{
		if (root->val == inorder[rootindex])
		{
			break;
		}
		else
		{
			++(rootindex);
		}
	}
	root->left = _buildTree(preorder, index, inorder, start, rootindex - 1);
	root->right = _buildTree(preorder, index, inorder, rootindex + 1, end);
	return root;
}
struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
	int index = 0;
	return _buildTree(preorder, &index, inorder, 0, inorderSize - 1);
}

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
struct TreeNode* _buildTree(int* postorder, int* index, int* inorder, int start, int end)
{
	if (start > end) return NULL;

	struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	root->val = postorder[(*index)];
	--(*index);

	if (start == end)
	{
		root->left = NULL;
		root->right = NULL;
		return root;
	}

	int rootindex = start;
	while (rootindex <= end)
	{
		if (root->val == inorder[rootindex])
		{
			break;
		}
		else
		{
			++(rootindex);
		}
	}
	root->right = _buildTree(postorder, index, inorder, rootindex + 1, end);

	root->left = _buildTree(postorder, index, inorder, start, rootindex - 1);
	return root;
}
struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize) {
	int index = postorderSize - 1;
	return _buildTree(postorder, &index, inorder, 0, inorderSize - 1);
}
/**
* Definition for a binary tree node.//非递归实现二叉树的遍历
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
typedef struct TreeNode* STDataType;
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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
	int size = 0;
	int i = 0;
	Stack st;
	StackInit(&st);

	struct TreeNode* cur = root;
	while (cur != NULL || StackEmpty(&st) != 0)
	{
		while (cur != NULL)
		{
			size++;
			StackPush(&st, cur);
			cur = cur->left;
		}

		struct TreeNode* top = StackTop(&st);
		StackPop(&st);

		cur = top->right;
	}
	cur = root;
	int* arr = (int*)malloc(sizeof(int)*size);
	while (cur != NULL || StackEmpty(&st) != 0)
	{
		while (cur != NULL)
		{
			StackPush(&st, cur);
			cur = cur->left;
		}

		struct TreeNode* top = StackTop(&st);
		arr[i++] = top->val;
		StackPop(&st);

		cur = top->right;
	}
	*returnSize = i;
	return arr;
}