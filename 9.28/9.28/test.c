//#include<stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////
////void menu()
//{
//	printf("*************************\n");
//	printf("*******  1. play  *******\n");
//	printf("*******  0. exit  *******\n");
//	printf("*************************\n");
//}
//
//void game()
//{
//	int num = 0;
//	int ret = rand()%100+1;
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("�����Ǹ���ɵ��\n");
//			break;
//		}
//		else if(num > ret)
//		{
//			printf("�����´���\n");
//		}
//		else
//		{
//			printf("ɳ���С��\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int BinarySearch(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > key)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
////	return -1;
////}
//int main()
//{ 	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 17;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	ret = BinarySearch(arr, key, sz);
//	if(ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ�%d\n", ret);
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	int mid = (left+right)/2;
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//
//		if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>key)
//		{
//			right = mid-1;
//		}
//		else
//		{
//
//			break;
//		}
//	}
//	if(left<=right)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{ int i=0;
//char key[20]={0};
//for(i=0; i<3; i++)
//  {
// printf("����������\n");
// scanf("%s",key);
// if(0==strcmp(key,"123123"))
// {break;}
// else 
// {printf("������������������\n");}
// 
//  }
//if(i<3)
//printf("chengong");
//
//else
//printf("shibai");
//return 0 ;}
#define _CRT_SECURE_NO_WARNINGS See online help for details
#include<stdio.h>
int main()
{char c1,c2;
scanf("%c\n",&c1);
if(c1>=65&&c1<=90)
  c2=c1+32;
else if(c1>=97&&c1<=122);
  c2=c1-32;
 printf("%c",c2);




return 0;}