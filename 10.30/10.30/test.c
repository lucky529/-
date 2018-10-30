#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_print(int *str, int sz)
{
	int i=0;
	for(i=0; i<=sz; i++)
	{
		if((str[i]%2)!=0)
		{
			continue;
		}
	    if((str[i]%2)==0)
		{
			int t=str[i];
			str[i]=str[sz-1];
			str[sz-1]=t;
			if(str[i]%2!=0)
				i--;
			sz--;
		}
	}//
}
int main()
{
	int arr[7]={1,3,5,6,2,4,9};
	int i=0;
	int sz;
	sz=sizeof(arr)/sizeof(arr[0]);
	my_print(arr,sz);
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

#include<stdio.h>
int my_sreach(int arr[3][3],int row,int col,int k)
{
	int x=0;
	int y=col-1;
	while((x<row)&&(y>=0))
	{
		if(k>arr[x][y])
		{
			x++;
		}
		else if(k==arr[x][y])
		{
			return 1;
		}
		else
		{
			y--;
		}
	}
	return 0;

}

int main()
{
	int m=0;
	int arr[3][3]={{1,3,4},{2,4,5},{4,5,6}};	
	my_sreach(arr,3,3,4);
	if(my_sreach(arr,3,3,4))
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}

