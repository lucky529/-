#include<stdio.h>
int my_strlen(char *string)
{
    int count = 0;
    if (*string == ¡®\0¡¯)
    {
        return 0;
    }
    return 1+my_strlen(char *string+1)
}

int main()
{
    char *str = "abcdef";
    printf("%d\n",my_strlen(str));
    system("pause");
    return 0;
}