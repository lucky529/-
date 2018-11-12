#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest,const char* src,int count)
{
	char* ret = dest;	
	assert(src != NULL);
	while(count--)//count来控制循环次数
	{
		*dest++ = *src++;		
	}
	*dest = '\0';//当赋值结束时应当让目标字符串以‘\0’结束
	return ret;
}
int main()
{
	int input = 0;
	char arr1[20] = "abcdef";
	char *arr2 = "abc";
	printf("请输入你想拷贝几个字符\n");
	scanf("%d",&input);
	my_strncpy(arr1, arr2, input);
    printf("%s\n",arr1);
	return 0;
}

#include<stdio.h>
char* my_strncat(char* dest,const char* src,int count)
{
	
	char* ret = dest;//保存dest的起始位置
	if(count < 0)
		return NULL;//判断假如count输入为负数时
	assert(src != NULL);
	while(*dest != '\0')
	{
		dest++;
	}
	while(count--)
	{
		*dest++ = *src++;		
	}
	*dest = '\0';//当赋值结束时应当让目标字符串以‘\0’结束
	return ret;
}
int main()
{
	int input = 0;
	char arr1[10] = "aaa";
	char *arr2 = "abc";
	printf("请输入你想连接几个字符\n");
	scanf("%d",&input);
	my_strncat(arr1, arr2, input);
    printf("%s\n",arr1);
	return 0;
}


#include<stdio.h>
int my_strncmp(const char* dest,const char* src,int count)
{
	assert(dest != NULL);
	assert(src != NULL);
	while((*dest == *src) && --count)//必须同时满足俩个条件时才满足
	{
		if(*dest == '\0')//如果*dest为0，说明*src已经结束返回0
			return 0;
		dest++;
		src++;
	}
	return *src-*dest;//直接返回比较结果数字

	
}
int main()
{
	int input = 0;
	char arr1[10] = "aaa";
	char *arr2 = "aaa";
	printf("请输入你想比较几个字符\n");
	scanf("%d",&input);
	my_strncmp(arr1, arr2, input);
    printf("%d\n",my_strncmp(arr1, arr2, input));
	return 0;
}