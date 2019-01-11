#include"test.h"

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = begin + ((end - begin) >> 1);
	if (a[begin] > a[mid])
	{
		if (a[end] > a[begin])
		{
			return begin;
		}
		else if (a[mid] > a[end])
		{
			return mid;
		}
		else
		{
			return end;
		}
	}
	else//begin < mid
	{
		if (a[end] > a[mid])
		{
			return mid;
		}
		else if (a[begin] > a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}

int Partsort1(int* a, int begin, int end)//左右指针法
{
	int key = begin;
	while (begin < end)
	{
		while (begin < end && a[end] >= a[key])
		{
			--end;
		}
		while (begin < end && a[begin] <= a[key])
		{
			++begin;
		}

		Swap(&a[begin], &a[end]);
	}

	Swap(&a[key], &a[end]);

	return begin;
}

int Partsort2(int* a, int begin, int end)//挖坑法
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int key = a[begin];
	while (begin < end)
	{
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		a[begin] = a[end];
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		a[end] = a[begin];
	}
	a[begin] = key;

	return begin;
}

int Partsort3(int* a, int begin, int end)//前后指针法
{
	int key = begin;
	int cur = begin + 1;
	int pre = begin;
	while (cur <= end)
	{
		if (a[cur] <= a[key] && ++pre != cur)
		{
			Swap(&a[cur], &a[pre]);
		}
		++cur;
	}
	Swap(&a[key], &a[pre]);

	return pre;
}

void Quicksort1(int* a, int begin, int end)//递归
{
	if (end <= begin)
	{
		return;
	}
	int index = Partsort2(a, begin, end);
	Quicksort1(a, begin, index - 1);
	Quicksort1(a, index + 1, end);
}

void Quicksort2(int* a, int begin, int end)//非递归
{
	Stack st;
	StackInit(&st);
	StackPush(&st, end);
	StackPush(&st, begin);

	while (StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);
		int right = StackTop(&st);
		StackPop(&st);

		int index = Partsort3(a, left, right);

		if (index + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, index + 1);
		}
		if (index - 1 > left)
		{
			StackPush(&st, index - 1);
			StackPush(&st, left);
		}
	}

}
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				flag = 1;
				Swap(&a[j], &a[j+1]);
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
void _MergeSort(int* a, int* tmp, int begin, int end)//归并排序
{

	if (begin >= end)
	{
		return;
	}
	int mid = begin + ((end - begin) >> 1);

	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid + 1, end);

	int begin1 = begin; int end1 = mid;
	int begin2 = mid + 1; int end2 = end;

	int index = 0;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}	
	
	for (int i = 0; i < index; i++)
	{
		a[begin + i] = tmp[i];
	}
}
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
}

void CountSort(int* a, int n)
{
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	int range = max - min + 1;
	int* ans = (int*)malloc(sizeof(int)*range);
	memset(ans, 0, sizeof(int)*range);//把数组中的数字全部设置为0
	for (int j = 0; j < n; j++)
	{
		ans[a[j] - min]++;
	}
	int index = 0;
	for (int k = 0; k < range; k++)
	{
		while (ans[k]--)
		{
			a[index++] = k + min;
		}
	}
}
void test1()
{
	int arr[] = { 1, 6, 5, 44, 33, 44, 88, 66, 77 };
	int n = sizeof(arr) / sizeof(int);
	Quicksort1(arr, 0, n - 1);
	Print(arr, n);
}

void test2()
{
	int arr[] = { 1, 6, 5, 4, 3, 44, 8, 66, 77 };
	int n = sizeof(arr) / sizeof(int);
	Quicksort2(arr, 0, n - 1);
	Print(arr, n);
}

void test3()
{
	int arr[] = { 16, 66, 56, 46, 36, 44, 8, 66, 77 };
	int n = sizeof(arr) / sizeof(int);
	MergeSort(arr, n);
	Print(arr, n);
}
