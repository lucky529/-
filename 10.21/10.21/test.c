//#include<stdio.h>
//int main()
//{
//	int input;
//	while((input=getchar())!=EOF)
//	{
//		if(input>='A'&&input<='Z')
//		{
//			putchar(input+32);
//		}
//		printf("\n");
//		if(input>='a'&&input<='z')
//		{
//			putchar(input-32);
//		}
//		printf("\n");
//		if(input>='0'&&input<='9')
//		{
//
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int print(int n,int k)
//{
//	if(k<1)
//	{
//		return 1;
//	}
//	
//    return n*print(n,k-1);
//	
//
//}
//int main()
//{
//	int n=0;
//	int k=0;
//	scanf("%d%d",&n,&k);
//	print(n,k);
//	printf("%d",print(n,k));
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int m=0;
//	int sum=0;
//	if(n>0)
//	{
//		m=n%10;
//		n=n/10;
//		sum=m+DigitSum(n);
//
//	}
//	return sum;
//}
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	DigitSum(input);
//	printf("%d",DigitSum(input));
//
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//    if(*str!='\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	return 0;
//
//}
//int main()
//{
//	char *str="abcdef";
//	my_strlen(str);
//	printf("%d\n",my_strlen(str));
//
//	return 0;
//}
#include<stdio.h>
int reverse_string(char * string)
{
   if(*string)
   {
	   int len=strlen(string);
   }

}
int main()
{
	int *str="abcdef";
	reverse_string(string);
	return 0;
}


