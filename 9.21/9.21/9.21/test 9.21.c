#include<stdio.h>
int main()
{
	int arr[10],i=0,k=0,max;
printf("请输入10个整数：");
for（i=0;i<10;i++）
scanf("%d",&arr[i]);
printf("\n");
for(i=1,max=arr[0];i<10;i++)
{
	if(arr[i]>max)
max=arr[i];

}
printf("%d",arr[i]);



	

return 0;
}