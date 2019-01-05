#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* arr1,const char* arr2)
//{
//	char* ret=arr1;
//	assert(arr2 != NULL);	
//	while(*arr1 != '\0')
//	{
//		arr1++;
//	}	
//	while(*arr1++ =*arr2++ )
//	{
//		;
//	}
//	return ret;
//		
//}
//int main()
//{
//	char arr1[20]="hello ";
//	char* arr2="world";
//	my_strcat(arr1,arr2);
//	printf("%s",arr1);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//char a[5]={'A','B','C','D'};
//char (*p3)[2] = &a;
//printf("%p",a);
//return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//char * fun(char * p1,char * p2)
//{
//int i = 0;
//i = strcmp(p1,p2);
//if (0 == i)
//{
//return p1;
//}
//else
//{
//return p2;
//}
//}
//int main()
//{
//char * (*pf)(char * p1,char * p2);
//pf = &fun;
//*(pf)("aa","bb");
//printf("%s",pf("aa","bb"));
//return 0;
//}

//#include<math.h>
//#include<stdio.h>
//int reverse_bits(unsigned int n)
//{	
//	int i = 0;
//	int sum = 0;
//	for(i = 0; i < 32; i++)
//	{
//		sum+=((n >> i) & 1) * pow(2,31-i);
//	}
//	return sum;
//}
//int reverse_bits(unsigned int n)
//{
//	int j = 0;
//	unsigned int i = 0;
//	int m = 0;
//	for(j = 0; j <= 31 ; j++ )
//	{
//		i = i << 1;
//		m = ((n >> j)&1);
//		i = m|i;//或与异或运算均可以
//	}
//	return i;
//}
//int main()
//{
//	int n=25;
//	reverse_bits(n);
//	printf("%u\n",reverse_bits(n));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,1,2,3};
//	int i = 0;
//	int ret = 0;
//	for(i = 0; i < 7; i++ )
//	{
//		ret^= arr[i];
//	}
//	printf("%d",ret);
//	return 0;
//}

//#include<stdio.h>
//void my_check(int arr[],int sz)
//{
//	int j = sz-1;
//	int i = 0;	
//	int t = 0;
//	int k = 0;
//	for(i = 0; i < sz; i++)
//	{
//		if(arr[i]%2 != 0)
//		{
//			continue;
//		}
//		else
//		{
//			t=arr[i];
//			arr[i]=arr[j];
//			arr[j]=t;
//			if(arr[j] == 0)
//			{
//				i--;
//			}
//			sz--;
//		}
//	}
//	for(k = 0; k<6; k++)
//	{
//		printf("%d ",arr[k]);
//	}
//	
//}
//int main()
//{
//	int j=0;
//	int arr[] = {1,3,5,4,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	my_check(arr,sz);	
//	return 0;
//}
