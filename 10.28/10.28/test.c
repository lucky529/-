//#include<stdio.h>
//int main()
//{
//	char killer='0';
//	for(killer=='A'; killer<='D';killer++)
//	{
//		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)
//		{
//			printf("凶手是%c\n",killer);
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#define N 10
//int main()
//{
//	int i=0;
//	int j=0;
//	int a[N][N];
//	for(i=0; i<N; i++)
//	{
//		a[i][i]=1;
//		a[i][0]=1;
//	}
//	for(i=2; i<N; i++)
//	
//		for(j=1; j<=i-1; j++)
//		{
//		
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//
//		}
//	
//	for(i=0; i<N; i++)
//	
//	{
//		   for(j=0; j<i; j++)
//		   {
//	           printf("%6d",a[i][j]);
//		   }
//	       printf("\n");
//	}	
//	printf("\n");
//				
//	return 0;
//}
//#include<stdio.h>//  方法一
//#include<stdlib.h>
//int BitDiffer(int m,int n)
//{
//	int count=0;
//	int i=0;
//	for (; i < 32; i++) 
//    {
//        if (m % 2 != n % 2)
//        {
//            count++;
//        }
//        m /= 2;
//        n /= 2;
//    }
//	      
//	return count;
//}
//int main()
//{
//	int m=0;
//	int n=0;
//	printf("请输入俩个不同的数字\n");	
//	scanf("%d%d",&m,&n);
//	BitDiffer(m,n);
//    printf("%d", BitDiffer(m,n));
//	system("pause");
//	return 0;
//}
//#include <stdio.h>// 方法二 
//int main()
//{
// int m=0;
// int n=0; 
// int c=0;
// int count=0;
// scanf("%d%d",&m,&n);
// c=m^n;
// while (c)
// {
//  if(c%2==1)
//  {
//   count++;
//  }
//  else
//  {
//   ;
//  }
//  c=c>>1;
// }
// printf("%d\n",count);
// return 0;
//}
//#include<stdio.h>
//int print(int m, int n)
//{
//	int count=0;
//	while(m)
//	{
//		if(m%2 != n%2)
//		{
//			count++;			
//		}
//		m>>=1;
//		n>>=1;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d",&m,&n);
//	print(m,n);
//	printf("%d\n",print(m,n));
//	return 0;
//}
//#include<stdio.h>
//int print(int m,int n)
//{
//	if(n<1)
//	{
//		return 1;
//	}
//	if(n>=1)
//
//		return m*print(m,n-1);	
//}
//int main()
//{
//	int m = 0;	
//	int n = 0;
//	scanf("%d%d",&m,&n);
//	print(m,n);
//	printf("%d\n",print(m,n));
//	return 0;
//}
//#include<stdio.h>
//int fib(int n)
//{
//	if(n<=2)
//	{
//		return 1;
//	}
//	if(n>2)
//		return fib(n-1)+fib(n-2);
//}
//int main()
//{		
//	int n = 0;
//	scanf("%d",&n);
//	fib(n);
//	printf("%d\n",fib(n));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d",&n);
//	if(n<=2)
//	{
//		printf("这个数为%d",a);
//		
//	}
//	
//		while(n>2)
//		{
//			c = a+b;
//		    a = b;
//		    b = c;
//		    n--;
//		}
//		printf("%d",c);
//
//		
//	return 0;
//}

//#include<stdio.h>
//int print(int n)
//{
//	int m=0;
//	int sum=0;
//	if(n!=0)
//	{
//		m=n%10;
//
//		sum=m+print(n/10);
//	}
//	
//	return sum;
//}
//int main()
//{
//	int n=1234;
//	print(n);
//	printf("%d",print(n));
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char *string)
//{
//	int count=0;
//	while(*string)
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//void reverse_string(char * string)
//{
//	if(*string)
//	{
//		int len=my_strlen(string);
//		char temp=string[0];
//		string[0]=string[len-1];
//		string[len-1]='\0';
//		reverse_string(string+1);
//		string[len-1]=temp;				
//	}
//
//}
//int main()
//{
//	char str[]="abcsef";
//	reverse_string(str);
//	printf("%s",str);
//	return 0;
//}

#include<stdio.h>
int main()
{
	return 0;
}