#include<stdio.h>
int strlen(char str[])
{
	if(*str== 0)
	{
		return 0;
	}
	else
	{
	return 1+strlen(str+1);
	}
}
int main()
{
	char str[]="adcdef";
	int ret=0;
	ret=strlen(str);
	printf("%d\n",strlen(str));
	return 0;
}
#include<stdio.h>
//#include<windows.h>
//int my_strlen(char *string)
//{
//        if (*string != '\0')
//    {
//        return 1+my_strlen(string+1);
//    }
//    return 0;
//}
int my_strlen(char *string)
{
	if(*string =='\0')
	{
		return 0;
	}
	return 1+my_strlen(string+1);
}

int main()
{
    char *str = "abcdef";
    printf("%d\n",my_strlen(str));
    system("pause");
    return 0;
}