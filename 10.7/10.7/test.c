//#include<time.h>
//#include <stdlib.h>
//void game()
// {
//	int ret=rand()%100+1;
//    int num=0;
//    while(1)
//{
//	    printf("�������:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("����\n");
//			break;
//		}
//		else if(num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n");
//		}
//
//
//
//}
//}
//void menu()
//{
//	printf("1.��Ϸ��ʼ\n");
//    printf("0.��Ϸ�˳�\n");
//}
//int main()
//{
//	int input=0;
//    srand((unsigned int)time(NULL));
//    do
//{   menu();
//	printf("���������֣�");
//    scanf("%d",&input);
//    switch(input)
// {
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//} while(input);
//
//return 0;
//}
#include<stdio.h>
int binarysearch(int arr[], int k, int left, int right)

{

	while(left<=right)

	{

		int mid = left+(right-left)/2;

		if(arr[mid] > k)

		{

			right = mid-1;

		}

		else if(arr[mid]<k)

		{

			left = mid+1;

		}

		else

		{

			return mid;

		}

	}

	return -1;

}
int main()
{     int arr[10]={1,2,3,4,5,6,7,8,9,10};
      int  k=7;
      int sz = sizeof(arr)/sizeof(arr[0]);

	int ret = binarysearch(arr, k, 0, sz-1);
if(-1==ret)
{
    printf("�ҵ���");
}
else
{
	printf("�ҵ���");
}



return 0;}