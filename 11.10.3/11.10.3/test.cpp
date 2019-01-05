#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<time.h>
//int RandomInRange(int start, int end)
//
//{	
//	rand() 产生0~RAND_MAX间的整数
//	rand()%x 产生0到x之间的随机数，不包括x
//	产生[start,end]之间的随机数
// 
//	if( start == end)
//		return start;
//	else if( start > end)
//	{	
//		return rand()% (start - end + 1) + end;
//	}
//	else
//	{	
//		return rand()% (end - start + 1) + start;
//	}
//}
void Swap(int* e1,int* e2)
{
	int tmp = *e1;
	*e1 = *e2;
	*e2 = tmp;
}
int Partition(int data[],int len,int start,int end)
{		
	int index = start;//start与end之间的随机数;	
	Swap(&data[index],&data[end]);

	int small = start-1;
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
	//srand((unsigned int)time(NULL));
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