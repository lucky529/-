/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
int TreeSize(struct TreeNode* root)//�����Ľ��ĸ���
{
	if (root == NULL)
	{
		return 0;
	}

	return TreeSize(root->left) + TreeSize(root->right) + 1;
}
void _preorderTraversal(struct TreeNode* root, int* ans, int* returnSize)
{
	if (root != NULL)
	{
		ans[(*returnSize)++] = root->val;
		_preorderTraversal(root->left, ans, returnSize);
		_preorderTraversal(root->right, ans, returnSize);
	}
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)//��������ǰ�����
{
	int size = TreeSize(root);
	int* ans = (int*)malloc(sizeof(int)*size);
	*returnSize = 0;

	_preorderTraversal(root, ans, returnSize);

	return ans;
}
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
bool isSameTree(struct TreeNode* p, struct TreeNode* q)//�ж��������Ƿ���ͬ
{
	if (p == NULL && q == NULL) return true;
	else if (p != NULL && q != NULL)
	{
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q -> val;
	}
	else
	{
		return false;
	}
}
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
bool isSameTree(struct TreeNode* p, struct TreeNode* q)//�ж��������Ƿ���ͬ
{
	if (p == NULL && q == NULL) return true;
	else if (p != NULL && q != NULL)
	{
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q->val;
	}
	else
	{
		return false;
	}
}
bool isSubtree(struct TreeNode* s, struct TreeNode* t)//��һ�����Ƿ�Ϊ��һ����������
{
	if (s == NULL) return false;

	else if (isSameTree(s, t)) return true;

	else if (isSubtree(s->left, t)) return true;

	else if (isSubtree(s->right, t)) return true;

	else return false;
}
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
int maxDepth(struct TreeNode* root)//��������������
{
	if (root == NULL)
	{
		return 0;
	}
	int left = maxDepth(root->left) + 1;
	int right = maxDepth(root->right) + 1;

	return left > right ? left : right;
}
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
int maxDepth(struct TreeNode* root)//��������������
{
	if (root == NULL)
	{
		return 0;
	}
	int left = maxDepth(root->left) + 1;
	int right = maxDepth(root->right) + 1;

	return left > right ? left : right;
}
bool isBalanced(struct TreeNode* root)//�ж��ǲ���ƽ�������
{
	if (root == NULL) return true;

	int maxleft = maxDepth(root->right);
	int maxright = maxDepth(root->left);

	return abs(maxleft - maxright)<2 && isBalanced(root->right) && isBalanced(root->left);
}

//ON�Ľⷨ

bool _isBalanced(struct TreeNode* root, int* pDepth) {
	if (root == NULL) {
		*pDepth = 0;
		return true;
	}

	int leftDepth = 0, rightDepth = 0;
	if (_isBalanced(root->left, &leftDepth)
		&& _isBalanced(root->right, &rightDepth)
		&& abs(leftDepth - rightDepth) < 2)
	{
		*pDepth = leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
		return true;
	}
	else
	{
		return false;
	}

}

bool isBalanced(struct TreeNode* root) {
	int depth = 0;
	return _isBalanced(root, &depth);
}
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
bool _isisSymmetric(struct TreeNode* left, struct TreeNode* right)//�Գƶ�����
{
	if (left == NULL && right == NULL) return true;
	if (left == NULL || right == NULL) return false;

	return _isisSymmetric(left->left, right->right) 
		&& _isisSymmetric(left->right, right->left) 
		&& left->val == right->val;
}
bool isSymmetric(struct TreeNode* root)
{
	return _isisSymmetric(root, root);
}