//void HeapSort(int* a, int n)//ʵ�ֶ�����
//{
//	int end = n - 1;
//	int i = 0;
//
//	for(i = (n - 2)/2; i >= 0; i--)
//	{
//		adjustdown(a, n , i);
//	}
//
//	while(end)
//	{
//		Swap(&a[0], &a[end]);
//		adjustdown(a, end, 0);
//		--end;
//	}
//}

//void TopK()//�ѵ�topk����
//{
//	const size_t N = 100000;
//	const size_t K = 10;
//	size_t* a = (size_t*)malloc(sizeof(size_t)*N);
//	srand((unsigned int)time(NULL));
//	for(int i = 0; i < N; i++)
//	{
//		a[i] = rand()%100;
//	}
//	Heap hp;
//
//	a[165] = 200; a[456] = 633;//�������Ƿ���ȷ
//
//	InitHeap(&hp, a , K);
//	for(int i = K; i < N; i++)
//	{
//		if(HeapTop(&hp) < a[i])
//		{
//			Popheap(&hp);
//			Pushheap(&hp, a[i]);//ɾ���Ѷ������ݣ�Ȼ��������������
//		}
//	}
//
//	Heapprint(&hp);
//}

//void PreOrder(struct TreeNode* root, int* returnSize, int* ans)//��������ǰ�����
//{
//    if(root !=  NULL)
//    {
//        ans[(*returnSize)++] = root -> val;
//        PreOrder(root -> left, returnSize, ans);
//        PreOrder(root -> right, returnSize, ans);
//    }
//}
//int TreeSize(struct TreeNode* root)
//{
//    if(root == NULL) return 0;
//    
//    return TreeSize(root -> left) + TreeSize(root -> right) + 1;
//}
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    int* ans = (int*)malloc(sizeof(int)*size);
//    *returnSize = 0;
//    PreOrder(root, returnSize, ans);
//    
//    return ans;
//}

//void InOrder(struct TreeNode* root, int* returnSize, int* ans)//���������������
//{
//    if(root != NULL)
//    {
//
//        InOrder(root -> left, returnSize, ans);
//        ans[(*returnSize)++] = root -> val;
//        InOrder(root -> right, returnSize, ans);
//
//    }
//}
//int TreeSize(struct TreeNode* root)
//{
//    if(root == NULL) return 0;
//    
//    return TreeSize(root -> left) + TreeSize(root -> right) + 1;
//}
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    int* ans = (int*)malloc(sizeof(int)*size);
//    *returnSize = 0;
//    InOrder(root, returnSize, ans);
//    
//    return ans;
//}
//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {//�ж������Ƿ���ͬ
//    if(p == NULL && q == NULL)
//    {
//        return true;
//    }
//    if(p != NULL && q != NULL)
//    {
//            return isSameTree(p -> left, q -> left) && 
//                isSameTree(p -> right, q -> right) && 
//                p ->val == q -> val;       
//    }
//    else
//    {
//        return false;
//    }
//}

//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {//�ж������Ƿ���ͬ
//    if(p == NULL && q == NULL)
//    {
//        return true;
//    }
//    if(p != NULL && q != NULL)
//    {
//            return isSameTree(p -> left, q -> left) && 
//                isSameTree(p -> right, q -> right) && 
//                p ->val == q -> val;       
//    }
//    else
//    {
//        return false;
//    }
//}
//bool isSubtree(struct TreeNode* s, struct TreeNode* t) {//������ͬ������
//    if(s == NULL)
//    {
//        return false;
//    }
//    if(isSameTree(s,t))
//    {
//        return true;
//    }
//    if(isSubtree(s -> left,t))
//    {
//        return true;
//    }
//    if(isSubtree(s -> right,t))
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}