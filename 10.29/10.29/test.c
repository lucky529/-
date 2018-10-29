//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int print(char* string)
//{	
//	if(*string=='\0')
//	{
//		return 0;
//	}
//
//	return 1+print(++string);
//	
//}
//int main()
//{
//	char *str="abcdef";
//	print(str);
//	printf("%d",print(str));
//	return 0;
//}

//#include <stdio.h>
//#define N 7
//void print(int arr[],int n)
//{
//
//}
//int main()
//{
// int a[N];
// int sz=0;
// int i=0;
// printf("ÇëÊäÈë7¸öÊý×Ö:");
//
// for(i=0;i<N;i++) 
// {
//	 scanf("%d",&a[i]);
// } 
// sz=sizeof(a)/sizeof(a[0]);
// print(N,sz);
// for(i=0; i<N; i++)
// {
//     printf("%d ",a[i]);
// }
// return 0;
//}
#include <stdio.h>
#include <stdlib.h>
void sort(int *a,int sz)
{
	int i = 0;
	int j = sz-1;
	for(i=0; i!=j; i++)
	{ 
		if(a[i]%2!=0)
			continue;
		else
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			if(a[j]%2==0)
			j--;
			i--;
		}
 
	}
}
 
int main()
{
	int a[] = {1,9,5,6,4,3,1};
	int sz = sizeof(a)/sizeof(a[0]);
	int i ;
	sort(a,sz);
	for(i=0; i<sz ;i++)
	{`1
		printf("%d ",a[i]);
	}
	return 0;
}
