#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int sum=1;
//	printf("请输入一个数\n");
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//		sum=sum*i;
//	}
//	printf("%d",sum);
//return 0;
//}
//#include<stdio.h>
//int print(int n)
//{
//	int sum=0;
//	if(n==1)
//	return 1;
//	else
//	return n*print(n-1);
//}
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	print(i);
//	printf("%d",print(i));
//return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//
//
//}
//int main()
//{
//	int i=0;
//	printf("请输入一个数\n");
//	scanf("%d",&i);
//	print(i);
//
//return 0;
//}
//#include<stdio.h>
//reverse_string(char * string)
//{
//
//
//
//
//}
//int main()
//{
//	char ch;
//	printf("请输入一个字符串\n");
//	scanf("%s",&ch);
//	reverse_string(&ch)；
//return 0;
//}
/
//#include <stdio.h>
// 
//char * reverse_string(char *p)
//{
//	int n = 0;
//	char temp;
//	char *q;
//	q = p;
//	while( *p != 0 )
//	{
//		n++;
//		p++;
//	}
//	
//	if( n > 1)
//	{
//		temp = q[0];
//		q[0] = q[n-1];
//		q[n - 1] = '\0';
//		reverse_string( q+1 );
//		q[n - 1] = temp;
//	}
//	return q;
//}
// 
//int main()
//{
//	char p[] = "dandanwa";
//	printf("原字符串是：%s\n",p);
//	printf("翻转后的字符串是：%s\n",reverse_string(p));
//	return 0;
//}
//#include<stdio.h>
//int _strlen(const char *src)
//{
//　　int i =0 ;
//　　for( ; *src++ ; i++) ;
//
//　　return i;
//}
//int main()
//{
//	char *str[]="asdfg";
//	printf("%s",_strlen(str));
//	system("pause");
//
//return 0;
}
//#include<stdio.h>
//#include<windows.h>
//int my_strlen(char *string)
//{
//    int count = 0;
//    if (*string != '\0')
//    {
//        count++;
//    }
//    return count;
//}
//
//int main()
//{
//    char *str = "abcdef";
//    printf("%d\n",my_strlen(str));
//    system("pause");
//    return 0;
//}
