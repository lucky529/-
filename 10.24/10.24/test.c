//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子: 
//1999 2299 
//输出例子:7
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
//int Print(int m ,int n)
//{
//	int count=0;
//	while(m)
//	{	
//		if(m%2!=n%2)
//		{
//			count++;
//		}
//		m=m/2;
//		n=n/2;
//
//	}
//	return count;
//}
//int main()
//{
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	Print(m ,n);
//	printf("%d",Print(m ,n));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	int d=0;
//	int e=0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&((b==2)+(e==4)==1)&&((c==1)+(d==2)==1)&&((c==5)+(d==3)==1)&&((e==4)+(a==1)==1))
//						{
//							if ((a != b) && (a != c) && (a != d) && (a != e) &&
//                                (b != c) && (b != d) && (b != e) &&
//                                (c != d) && (c != e) && (d != e))
//							{
//								printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//int print(int n)
//{
//      if(n>9)
//	  {	  
//	    print(n/10);
//	  }
//	  
//	  printf("%d ",n%10);
//      
//}
//int main()
//{
//	int n=0;	
//	scanf("%d",&n);
//	print(n);		
//    return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
//嫌疑犯的一个。以下为4个嫌疑犯的供词。 
//A说：不是我。 
//B说：是C。 
//C说：是D。 
//D说：C在胡说 
//已知3个人说了真话，1个人说的是假话。 
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//#include <stdio.h>
//int main()
//{
//	int A=0,B=0,C=0,D=0;	
//	int i;
//	int FD;
//	for(i=1; i<=4; i++)
//	{
//		
//		if(i==1)
//		{
//			A=1;C=1;FD=1;D=0;
//		}
//		if(i==2)
//		{
//			A=0;C=0;FD=1;D=0;
//		}
//		if(i==3)
//		{
//			A=0;C=1;FD=0;D=0;
//		}
//		if(i==4)
//		{
//			A=0;C=1;FD=1;D=0;
//		}
//		if(A+B+C+D+FD==1&&FD==D)
//			printf("A=%d B=%d C=%d D=%d\n",A,B,C,D);  
//	}
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
//		
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		
//	
//	for(i=0; i<N; i++)
//	
//	{
//		   for(j=0; j<i; j++)
//		
//	       printf("%6d",a[i][j]);	
//	       printf("\n");
//	}	
//	printf("\n");
//				
//	return 0;
//}
