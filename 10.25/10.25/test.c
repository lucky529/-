//#include<stdio.h>
//#define N 10
//int main()
//{
//	int a[N][N];
//	int i=0;
//	int j=0;
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
//	for(i=0; i<N; i++)
//	{
//		for(j=0; j<=i; j++)	
//		{
//			printf("%6d",a[i][j]);
//			
//		}
//		printf("\n");
//    }
//	printf("\n");
//
//	return 0;
//}

 

//#include<stdio.h>
//int main()
//{
//	int a=15;
//	int b=13;
//	int aver=0;
//	if(a<b)
//	{
//		aver=(b-a)/2+a;
//	}
//	else
//	{
//		aver=(a-b)/2+b;
//	}
//	printf("%d\n",aver);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[7]={1,2,3,4,3,2,1};
//	int m=0;
//	m=a[0]^a[1]^a[2]^a[3]^a[4]^a[5]^a[6];
//	printf("%d/n",m);
//	return 0;
//}
//#include<stdio.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int ret=0;
//	int i=0;
//	int bit=0;
//	for(i=0; i<32; i++)
//	{
//	     ret = ret << 1;
//         bit = value & 1;
//         value = value >> 1;
//         ret = bit | ret;
//	}
//	return ret;
//}
//int main()
//{
//	int m=0;
//	printf("请输入一个数字\n");
//	scanf("%d",&m);
//	reverse_bit(m);
//	printf("%u",reverse_bit(m));
//	return 0;
//}

//#include<stdio.h>
//void my_print(char** arr,int sz)
//{
//	int ret=2;	
//	char temp;
//	char remp;
//	temp=*arr[0];
//	*arr[0]=*arr[sz-1];
//	*arr[sz-1]=temp;
//	remp=*arr[1];
//	*arr[1]=*arr[sz-2];
//	*arr[sz-2]=remp;
//	printf("%c",**arr);
//	
//}
//int main()
//{
//	int sz;
//	char* arr[]={"i","am","a","student"};
//	sz=sizeof(arr)/sizeof(arr[0]);
//	my_print(*arr,sz);		
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<assert.h>
// 
// 
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while(*str != '/0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int len = my_strlen(arr);
//	char tem = arr[0];
//	arr[0] = arr[len-1];
//	arr[len-1] = '\0';
//	if(my_strlen(arr+1)>1)	
//	reverse_string(arr+1);
//	arr[len-1] = tem;
//}
 
 
//int main()
//{
// 
//	char arr[] ="abcdef";
//	reverse_string(arr);
//	printf("逆序后的数组为：%s\n",arr);
//	  
//	system("pause");
//	return 0;
//}
#include<stdio.h>
char reverse_string(char * string)
{
  if(* string)
  {
  string++;                  //自加到最后一位，因为先加所以打印时要减一
  reverse_string(string);    //递归
  printf("%c",*(string - 1));//调用栈帧，按先进后出的顺序打印
  }                          //正进反出
  return 0;
}
int main()
{
	char arr[] = "abcde";
	reverse_string(arr);
return 0;
}




