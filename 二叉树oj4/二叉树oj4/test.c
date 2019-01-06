//class Solution {//二叉树转换为双向链表
//
//public:
//	TreeNode* prev = NULL;
//	void _Convert(TreeNode* cur)
//	{
//		if (cur == NULL) return;
//		_Convert(cur->left);
//		cur->left = prev;
//		if (prev)
//			prev->right = cur;
//		prev = cur;
//		_Convert(cur->right);
//	}
//
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		if (pRootOfTree == NULL) return NULL;
//
//		_Convert(pRootOfTree);
//		TreeNode* head = pRootOfTree;
//		while (head && head->left)
//		{
//			head = head->left;
//		}
//		return head;
//	}
//};
//
//int FindNode(struct TreeNode* dest, struct TreeNode* src)//二叉树的最近公共祖先
//{
//	if (dest == NULL) return 0;
//
//	if (dest == src) return 1;
//
//	else if (FindNode(dest->left, src) == 1) return 1;
//
//	else if (FindNode(dest->right, src) == 1) return 1;
//
//	else return 0;
//}
//struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
//	if (root == NULL) return NULL;
//
//	if (p == root || q == root) return root;
//
//	int pInleft = FindNode(root->left, p);
//	int qInleft = FindNode(root->left, q);
//
//	if (pInleft == 1 && qInleft == 1)
//
//		return lowestCommonAncestor(root->left, p, q);
//
//	else if (pInleft == 0 && qInleft == 0)
//
//		return lowestCommonAncestor(root->right, p, q);
//
//	else
//
//		return root;
//}
//
//void _tree2str(struct TreeNode* t, char* ptr)//二叉树创建字符串
//{
//	if (t == NULL)
//		return;
//	char buff[12] = { '\0' };
//	sprintf(buff, "%d", t->val);
//	strcat(ptr, buff);
//
//	if (t->left == NULL)
//	{
//		if (t->right == NULL)
//		{
//			return;
//		}
//		else
//		{
//			strcat(ptr, "()");
//		}
//	}
//	else
//	{
//		strcat(ptr, "(");
//		_tree2str(t->left, ptr);
//		strcat(ptr, ")");
//	}
//
//	if (t->right == NULL)
//	{
//		return;
//	}
//	else
//	{
//		strcat(ptr, "(");
//		_tree2str(t->right, ptr);
//		strcat(ptr, ")");
//	}
//}
//char* tree2str(struct TreeNode* t) {
//	char* ptr = (char*)malloc(1024 * 1024);
//	_tree2str(t, ptr);
//	return ptr;
//}
