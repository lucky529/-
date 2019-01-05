#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* temp = dest;
//	assert(src != NULL);
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return temp;
//}
//int main()
//{
//	char arr[20] = {0};
//	char *p = "abcdef";
//	my_strcpy(arr, p);
//	printf("%s",arr);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* arr,const char* src)
//{
//	char* temp = arr;
//	assert(src != NULL);
//	while(*arr != '\0')
//	{
//		arr++;
//	}
//	while(*arr++ = *src++)
//	{
//		;
//	}
//	return temp;
//}
//int main()
//{
//	char arr[20] = "abc";
//	char* p = "abcdef";
//	my_strcat(arr,p);
//	printf("%s",arr);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* dest,const char* src)//函数返回找到目标开始匹配且成功的起始位置
//{
//	const char* s1 = dest;//定义s1让dest备份
//	const char* s2 = src;
//	const char* ptr = dest;
//	assert(src != NULL);
//
//	while(*ptr)//ptr++寻找开始匹配的位置
//	{
//		s1 = ptr;//记住开始匹配的位置
//		s2 = src;//记住子字符串开始的位置
//		while(*s1 && *s2 && *s1 == *s2)//有一个条件为假结束
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')//当s2说明匹配成功 返回目标字符串的开始位置
//			return (char*)ptr;
//		ptr++;//假设开始匹配却未匹配成功*ptr没有成为'\0'时，ptr加加开始下一轮查找
//	}
//	return NULL;//没有找到时返回空指针
//
//}
//int main()
//{
//	char* arr1 = "abbbcef";
//	char* arr2 = "bce";
//	my_strstr(arr1,arr2);
//	printf("%s",my_strstr(arr1,arr2));
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* dest,const char* src)
//{
//	assert(dest != NULL);//判断传过来的指针是不是为空
//	assert(src != NULL);
//	while(*dest == *src)//当src为'\0'时结束，但他的值赋给了dest,
//		//所以在循环内部返回0；然后跳出循环
//	{
//		if(*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;src++;
//	}
//	if(*dest > *src)//不要把判断写在if之后，因为当dest为0时程序没有机会来到最后
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char* arr1 = "abc";//测试三种情况保证程序的正确性
//	char* arr2 = "abc";
//	my_strcmp(arr1,arr2);
//	printf("%d",my_strcmp(arr1,arr2));
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* dest,const void* src,int count)
//{
//	void* temp = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(count--)
//	{
//		if(src < dest)//不判断指针的大小即是memcpy,判断指针大小函数便成为了memmove函数。
//		*((char*)dest+1) = *((char*)src+1);
//		//((char*)dest)++;
//		//((char*)src)++;
//		else
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return temp;
//}
//int main()
//{
//	int i = 0;
//	int arr1[] = {1,2,3,4,5,6};
//	int arr2[20] = {1,2,3,4,5,6,7,8,9,10};
//    my_memcpy(arr2+2, arr1, 12);//向目标字符串拷贝12个字节
//    for(i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strchr(const char* dest,const char* src)
//{	
//	while(*dest)
//	{	
//		if(*dest == *src)
//			return dest;
//		dest++;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	char* arr1 = "abbbcef";
//	char* arr2 = "b";
//	my_strchr(arr1,arr2);
//	printf("%s",my_strchr(arr1,arr2));
//	return 0;
//}