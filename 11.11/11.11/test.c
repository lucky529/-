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
//char* my_strstr(const char* dest,const char* src)//���������ҵ�Ŀ�꿪ʼƥ���ҳɹ�����ʼλ��
//{
//	const char* s1 = dest;//����s1��dest����
//	const char* s2 = src;
//	const char* ptr = dest;
//	assert(src != NULL);
//
//	while(*ptr)//ptr++Ѱ�ҿ�ʼƥ���λ��
//	{
//		s1 = ptr;//��ס��ʼƥ���λ��
//		s2 = src;//��ס���ַ�����ʼ��λ��
//		while(*s1 && *s2 && *s1 == *s2)//��һ������Ϊ�ٽ���
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')//��s2˵��ƥ��ɹ� ����Ŀ���ַ����Ŀ�ʼλ��
//			return (char*)ptr;
//		ptr++;//���迪ʼƥ��ȴδƥ��ɹ�*ptrû�г�Ϊ'\0'ʱ��ptr�Ӽӿ�ʼ��һ�ֲ���
//	}
//	return NULL;//û���ҵ�ʱ���ؿ�ָ��
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
//	assert(dest != NULL);//�жϴ�������ָ���ǲ���Ϊ��
//	assert(src != NULL);
//	while(*dest == *src)//��srcΪ'\0'ʱ������������ֵ������dest,
//		//������ѭ���ڲ�����0��Ȼ������ѭ��
//	{
//		if(*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;src++;
//	}
//	if(*dest > *src)//��Ҫ���ж�д��if֮����Ϊ��destΪ0ʱ����û�л����������
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
//	char* arr1 = "abc";//�������������֤�������ȷ��
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
//		if(src < dest)//���ж�ָ��Ĵ�С����memcpy,�ж�ָ���С�������Ϊ��memmove������
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
//    my_memcpy(arr2+2, arr1, 12);//��Ŀ���ַ�������12���ֽ�
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