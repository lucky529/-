#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int print(char *str)
//{
//	int count=0;
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int print(const char* str)
//{
//	int count=0;
//	assert(str!=NULL);
//	if(*str=='\0')
//	{
//		return 0;
//	}
//	return 1+print(str+1);
//}
//int main()
//{
//	char *str="abcdef";
//	print(str);
//	printf("%d\n",print(str));
//	return 0;
//}
//int my_print(int n,int k)
//{
//	int sum=1;
//	int p=n;
//	int q=k-1;
//	int i=0;
//	if(k<1)
//	{
//		return 1;
//	}
//	if(k>=1)
//	{
//		for(i=0; i<=q; i++)
//			sum=sum*p;
//	}
//	return sum;
//}
//int my_print(int n,int k)
//{
//	if(k<1)
//	{
//		return 1;
//	}
//	if(k>=1)
//		return n*my_print(n,k-1);
//}
//int main()
//{
//	int m=0;
//	int n=0;
//	printf("请输入n,k\n");
//	scanf("%d%d",&m,&n);
//	my_print(m,n);
//	printf("%d\n",my_print(m,n));
//    return 0;
//}
//void my_print(int m)
//{
//	if(m>9)
//	{
//		my_print(m/10);
//	}
//	printf("%d ",m%10);
//}
//int main()
//{
//	int m=0;	
//	printf("请输入一个数字\n");
//	scanf("%d",&m);
//	my_print(m);	
//    return 0;
//}
//#include<stdioh>
//int main()
//{
//	int input=0;
//	int i=1;
//	int j=1;
//	int k=0;
//	printf("请输入你想打印的行数\n");
//	scanf("%d",&input);
//	for(i=1; i<=input; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			k=i*j;
//			printf("%d*%d=%2d ",j,i,k);			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//void my_swap(int* a,int* b)//形式参数其实只是一份临时的拷贝
//{
//	int temp=*a;
//	*a=*b;
//	*b=temp;	
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	my_swap(&a,&b);//给函数传地址否则最后的输出不发生变化
//	printf("%d %d\n",a,b);
//	return 0;
//}

//#include<stdio.h>
//int my_YEAR(int n)
//{
//	if((n%4==0)&&(n%100!=0)||(n%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int input=0;
//	printf("请输入一个年份\n");
//	scanf("%d",&input);
//	my_YEAR(input);
//	if(my_YEAR(input))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//void Init(int arr[10])
//{
//	int i=0;
//	for(i=0; i<10; i++)
//	{
//		arr[i]=i;
//	}
//}
//
//void empty(int arr[10],int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));
//}
//
//void reverse(int arr[10],int sz)
//{
//	int i=0;
//	for(i=0; i<sz/2; i++)
//	{
//		int temp=arr[i];
//		arr[i]=arr[sz-1-i];
//		arr[sz-1-i]=temp;;
//	}
//}
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,5,4,6,8};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	Init(arr);
//	empty(arr,sz);
//	reverse(arr,sz);
//	for(i=0; i<10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void su_print(int m)
//{
//	int i=0;
//	for(i=2; i<m; i++)
//	{
//		if(m%i==0)
//		{
//			break;
//		}
//	}
//	if(i>=m)
//	{
//		printf("这个数是素数\n");
//	}
//	else
//	{
//		printf("这个数不是素数\n");
//	}
//
//}
//int main()
//{
//	int input=0;
//	printf("请输入你要判断的数\n");
//	scanf("%d",&input);
//	su_print(input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1; i<=100000000; i+=2)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum*4);
//return 0;
//}

//#include<stdio.h>
//#include<time.h>
//void menu()
//{
//	printf("****************\n");
//	printf("***1.游戏开始***\n");
//	printf("***0.游戏退出***\n");
//	printf("****************\n");
//}
//void game()
//{
//	int x=rand()%100+1;
//	int num=0;
//	while(1)
//	{
//		printf("请输入数字\n");
//		scanf("%d",&num);
//		if(x==num)
//		{
//			printf("你猜对了\n");
//			break;
//		}
//		if(x>num)
//		{
//			printf("猜小了\n");
//		}
//		if(x<num)
//		{
//			printf("猜大了\n");
//		}
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏退出\n");
//			break;
//		default:
//			printf("输入有误请重试\n");
//			break;
//		}
//	}
//	while(input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a=5;
//	int b=0;
//	b=5/2;
//	printf("%d",b);
//	return 0;
//}
