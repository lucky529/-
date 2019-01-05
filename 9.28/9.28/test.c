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
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if(num == ret)
//		{
//			printf("你真是个大傻吊\n");
//			break;
//		}
//		else if(num > ret)
//		{
//			printf("蠢货猜大了\n");
//		}
//		else
//		{
//			printf("沙雕猜小了\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误\n");
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
//		printf("找不到\n");
//	else
//		printf("找到了：%d\n", ret);
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
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{ int i=0;
//char key[20]={0};
//for(i=0; i<3; i++)
//  {
// printf("请输入密码\n");
// scanf("%s",key);
// if(0==strcmp(key,"123123"))
// {break;}
// else 
// {printf("输入有误，请重新输入\n");}
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