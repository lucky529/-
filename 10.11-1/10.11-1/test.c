//#include<stdio.h>//power()
//int power_ineration(int n,int k)//迭代
//{
//	int	q = n;
//	int p = k-1;
//	assert(k>=0);
//	if(k == 0)
//	{
//		return 1;
//	}
//	while(p>0)
//	{   p=p-1;
//		n = n*q;
//	}
//	return n;
//}
////int power_recursion(int n,int k)//递归
////{
////	if(k==0)
////	{
////		return 1;
////	}
////	if(k == 1)
////	{
////		return n;
////	}
////	return n*power_recursion(n,k-1);
////}
//int main()
//{
//	int result = 0;
//	int n = 0;
//	int k = 0;
//	printf("plesase input n and k:\n");
//	scanf("%d%d",&n,&k);
//	/*result = power_recursion(n,k);*/
//	result = power_ineration(n,k);
//	printf("%d\n",result);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void lucky_sum(int n)
//{
//	int c=0;
//	
//	if(n>9)
//	{
//		lucky_sum(n/10);
//			
//	}
//	c=n%10;
//
//	printf("%d ",c);
//	
//	 
//
//
//
//}
//int main()
//{
//	int i=0;
//	int b=0;
//	scanf("%d",&i);
//	lucky_sum(i);
//
//
//
//return 0;
//}

//#include <stdio.h>
//int DigitSum(int n)
//{
//	int sum=0;
//	int m=0;
//	if(n!=0)
//	
//	{
//		m=n%10;
//		n=n/10;
//		sum=m+DigitSum(n);
//
//	
//	}
//return sum;
//
//}
//int main ()
//{
//	int a;
//	printf("请输入一个整数： ");
//	scanf("%d",&a);
//	printf("各位数之和为：%d\n",DigitSum(a));
//	return 0;
//}

