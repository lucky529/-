#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int *e1,int *e2)
{
	int t = *e1;
	*e1 =*e2;
	*e2 = t;
}
int psu(int data[],int len,int s,int e)
{
	int small = 0;
	int index = 4;
	swap(&data[index],&data[e]);

	small = s-1;
	for(index = s; index<e; index++)
	{
		if(data[index]<data[e])
		{
			++small;
			if(small != index)
				swap(&data[index],&data[small]);
		}
	}
	++small;
	swap(&data[small],&data[e]);
	return small;

}
int main()
{
	int arr[7] = {1,2,3,6,5,7,4};
	int sz = 7;
	psu(arr,7,3,6);
	return 0;
}