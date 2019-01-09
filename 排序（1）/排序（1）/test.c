#include"test.h"

void Insertsort(int* a, int n)//≤Â»Î≈≈–Ú
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
			a[end + 1] = tmp;
		}
	}
}

void Shellsort(int* a, int n)//œ£∂˚≈≈–Ú
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end--;
				}
				else
				{
					break;
				}
				a[end + gap] = tmp;
			}
		}
	}
}
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Selectsort(int* a, int n)//÷±Ω”—°‘Ò≈≈–Ú
{
	int start = 0;
	int end = n - 1;
	
	while (start < end)
	{
		int min = start;
		int max = end;
		for (int i = start; i <= end; i++)
		{
			if (a[i] >= a[max])
			{
				max = i;
			}
			if (a[i] <= a[min])
			{
				min = i;
			}
		}
		Swap(&a[min], &a[start]);
		if (max == start)
		{
			max = min;
		}
		Swap(&a[max], &a[end]);

		end--; start++;
	}
}
void AdJustdown(int* a, int size, int root)//œÚœ¬µ˜’˚À„∑®
{
	int parent = root;
	int child = 2 * parent + 1;
	while (child < size)
	{
		if (a[child] < a[child + 1] && child + 1 < size)
		{
			++child;
		}

		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);

			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}
void Heapsort(int* a, int n)//∂—≈≈–Ú
{
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdJustdown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdJustdown(a, end, 0);
		end--;
	}
}

void Printarr(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void test()
{
	int arr1[] = { 1, 3, 2, 5, 4, 6, 7, 9, 8 };
	int arr2[] = { 1, 3, 2, 5, 4, 6, 7, 9, 56};

	int size = sizeof(arr2) / sizeof(int);
	Shellsort(arr2, size);//œ£∂˚≈≈–Ú
	Printarr(arr2, size);

	Insertsort(arr2, size);//≤Â»Î≈≈–Ú
	Printarr(arr2, size);

	Selectsort(arr2, size);//÷±Ω”—°‘Ò≈≈–Ú
	Printarr(arr2, size);

	Heapsort(arr2, size);//∂—≈≈–Ú
	Printarr(arr2, size);

	system("pause");
}