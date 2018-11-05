#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void reverse_string(char *str,int n,int sz)
{
	int i=0;	
	while(n--)
	{
		char t=*str;
		for(i=0; i<sz; i++)
		{
			str[i]=str[i+1];

		}
		str[sz-1]=t;
	}
	
}
int main()
{
	char str[] = "abcdef";
	int input = 0;
	int sz = strlen(str);
	printf("请输入你想旋转的字符串位置\n");
	scanf("%d",&input);
	reverse_string(str,input,sz);	
	printf("%s",str);
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void left_move(char*str, int k)
//{
//  int len = 4;
//  int i = 0;
//  while (k--)
//  {
//    //1.把第一个保存起来
//    char tmp = *str;
//    //2.后面的向后移动
//    len = strlen(str);
//    for (i = 0; i < len; i++)
//    {
//      *(str + i) = *(str + 1 + i);
//    }
//    //3.把保存的数据放在最后一位
//    *(str + len - 1) = tmp;
//  }
//}
//int main()
//{
//  char arr[] = "ABCD";
//  int n = 0;
//  printf("请输入左旋位数：");
//  scanf_s("%d", &n);
//  left_move(arr, n);
//  printf("%s ", arr);
//  system("pause");
//  return 0;
//}
