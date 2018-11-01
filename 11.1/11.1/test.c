#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_check(int arr[10],int sz,int k)
{
	int mid=0;
	int right=sz-1;
	int left=0;
	while(left<=right)
	{
		mid=(right+left)/2;
		if(arr[mid]==k)
		{
			return mid;
		}
		else if(arr[mid]<k)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return -1;
}
int main()
{
	int ret=0;	
	int arr[10]={1,2,3,4,5,8,7,6,9,0};
	int k=6;
	int sz=sizeof(arr)/sizeof(arr[0]);
	    ret=binary_check(arr,sz,k);
	if(ret==-1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("这个数字的下标为%d\n",ret);
	}
	return 0;
}

int main()
{
	int key=123456;
	int n=3;
	int input=0;
	printf("请输入密码\n");
	while(n)
	{
		scanf("%d",&input);
		if(input==key)
		{
			printf("密码输入正确，登陆成功\n");
			break;
		}
		else
		{
			printf("密码输入有误，请再次输入\n");
		}
		n--;
	}
	if(n==0)
	{
		printf("程序退出\n");
	}
	else
	{
		;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int input;
	while((input=getchar())!=EOF)
	{
		if(input>='A'&&input<='Z')
		{
			putchar(input+32);
		}
		printf("\n");
		if(input>='a'&&input<='z')
		{
			putchar(input-32);
		}
		printf("\n");
		if(input>='0'&&input<='9')
		{

		}
	}

	return 0;
}