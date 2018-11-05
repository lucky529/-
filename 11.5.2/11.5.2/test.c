#define _CRT_SECURE_NO_WARNINGS 1
//    int num = 0;
//    int flag = 0;
//    for (i = 0; i < sz; i++)
//    {
//        num = num^a[i];
//    }
//    for (i = 0; i < 32; i++)
//    {
//        if (((num >> i) & 1) != 1)//找异或之后这个数字二进制数中最先出现的1的位置
//        {
//            flag++;
//        }
//        else
//            break;
//
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (((a[i] >> flag)&1) == 1)//分成2组
//            num1 ^= a[i];
//        else
//            num2 ^= a[i];
//    }
//    printf("%d %d\n",num1,num2);
//}
//
//int main()
//{
//    int a[] = { 1, 2, 2, 3 };
//    int sz = sizeof(a) / sizeof(a[0]);
//    find(a, sz);
//    system("pause");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count=0;
//	int input=13;
//	int sum=0;
//	int yuan=input;	
//	while(input != 1)
//	{
//		if(input%2!=0)
//		{
//			count++;			
//		}
//		sum=sum+input/2;
//		input=input/2;
//	}
//	sum=sum+yuan;
//	if(yuan%2==0)
//	{
//	printf("%d",sum+count);
//	}
//	else
//	{
//		printf("%d",sum+count);
//	}
//	return 0;
//}



//模拟实现strcpy 
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* arr1,const char* arr2)
//{
//	char* temp=arr1;
//	assert(arr2 != NULL);
//	while(*arr1++ = *arr2++)
//	{
//
//	}
//	return temp;
//
//}
//int main()
//{
//	char arr1[10];
//	char arr2[10]="abcdef";
//	my_strcpy(arr1,arr2);
//	printf("%s",arr1);
//	return 0;
//}
