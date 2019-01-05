//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for(i = 1; i<=100; i+=1)
//	{
//		sum += flag * (1.0/i);
//		flag = -flag;
//
//	}
//	printf("%f",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for(i = 1; i<=100; i++)
//	{
//		if((i%10)==9)
//			count++;
//		if((i/10)%10==9)
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void reverse(char* arr, int sz)
//{
//	    int i = 0;
//		char tmp = arr[0];
//        for(i = 1; i<sz; ++i)
//		{			
//			arr[i-1] = arr[i];	
//			
//		}
//		arr[sz-1] = tmp;		
//}
//void reverse1(char* arr, int sz,int n)
//{
//	while(n--)
//	{
//		reverse(arr, sz);
//	}
//}
//int main()
//{
//	int input = 0;
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	printf("请输入你想旋转字符串的位置\n");
//    scanf("%d",&input);
//	reverse1(arr,sz,input);
//	printf("%s",arr);
//	return 0;
//
//}
//
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char*e1,char*e2)
//{
//	assert(e1 != NULL);
//	assert(e2 != NULL);
//	while(e1<e2)
//	{
//		char t = *e1;
//		*e1 = *e2;
//		*e2 = t;
//		e1++;//指针一个加 一个减
//		e2--;
//	}
//}
//void reverse1(char* arr, int n)
//{
//	int len = strlen(arr);
//	char* pb1 = arr;
//	char* pb2 = arr+n-1;
//	char* pe1 = arr+n;
//	char* pe2 = arr+len-1;
//	reverse(pb1,pb2);
//	reverse(pe1,pe2);
//	reverse(pb1,pe2);
//
//}
//int main()
//{
//	char arr[]="abcdef";
//	int input = 0;	
//	printf("请输入你要旋转字符串的位置\n");
//	scanf("%d", &input);
//	reverse1(arr, input);
//	printf("%s",arr);
//	return 0;
//}


#include<stdio.h>
void Swap(int* e1,int* e2)
{
	int tmp = *e1;
	*e1 = *e2;
	*e2 = tmp;
}
int Partition(int data[],int len,int start,int end)
{
	int small = 0;
	int index = start+1;	
	Swap(&data[index],&data[end]);

	small = start-1;
	for(index = start;index<end; ++index)
	{
		if(data[index] < data[end])
		{
			++small;
			if(small != index)
			{
				Swap(&data[index],&data[small]);
			}
		}		
	}
	++small;
	Swap(&data[small],&data[end]);

	return small;
}
void Quicksort(int data[],int len,int start,int end)
{	
	if(start == end)
		return;
	int index = Partition(data,len,start,end);
	if(index > start)
	{
		Partition(data,len,start,index-1);
	}
	if(index < end)
	{
		Partition(data,len,index+1,end);
	}
}
int main()
{
	int i = 0;
	int arr[7] = {1,3,2,5,4,6,7};
	int sz = sizeof(arr)/sizeof(arr[0]);
	Quicksort(arr,sz,0,sz-1);
	for(i = 0; i< sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}