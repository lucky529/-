#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* dest,const char* src,int count)
{
	char* ret = dest;	
	assert(src != NULL);
	while(count--)//count������ѭ������
	{
		*dest++ = *src++;		
	}
	*dest = '\0';//����ֵ����ʱӦ����Ŀ���ַ����ԡ�\0������
	return ret;
}
int main()
{
	int input = 0;
	char arr1[20] = "abcdef";
	char *arr2 = "abc";
	printf("���������뿽�������ַ�\n");
	scanf("%d",&input);
	my_strncpy(arr1, arr2, input);
    printf("%s\n",arr1);
	return 0;
}

#include<stdio.h>
char* my_strncat(char* dest,const char* src,int count)
{
	
	char* ret = dest;//����dest����ʼλ��
	if(count < 0)
		return NULL;//�жϼ���count����Ϊ����ʱ
	assert(src != NULL);
	while(*dest != '\0')
	{
		dest++;
	}
	while(count--)
	{
		*dest++ = *src++;		
	}
	*dest = '\0';//����ֵ����ʱӦ����Ŀ���ַ����ԡ�\0������
	return ret;
}
int main()
{
	int input = 0;
	char arr1[10] = "aaa";
	char *arr2 = "abc";
	printf("�������������Ӽ����ַ�\n");
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
	while((*dest == *src) && --count)//����ͬʱ������������ʱ������
	{
		if(*dest == '\0')//���*destΪ0��˵��*src�Ѿ���������0
			return 0;
		dest++;
		src++;
	}
	return *src-*dest;//ֱ�ӷ��رȽϽ������

	
}
int main()
{
	int input = 0;
	char arr1[10] = "aaa";
	char *arr2 = "aaa";
	printf("����������Ƚϼ����ַ�\n");
	scanf("%d",&input);
	my_strncmp(arr1, arr2, input);
    printf("%d\n",my_strncmp(arr1, arr2, input));
	return 0;
}