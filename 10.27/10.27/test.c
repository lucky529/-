//#include<stdio.h>
//void print(int n)
//{
//	int i=0;
//	for(i=31; i>0; i-=2)
//	{
//		printf("%d",(n>>i)&1);
//	}
//	printf("\n");
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d",(n>>i)&1);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int m=0;
//	printf("请输入一个数字\n");
//    scanf("%d",&m);
//	print(m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char killer='0';
//	for(killer='A';killer<='D';killer++)
//	{
//		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)
//			printf("凶手是%c\n",killer);
//	}
//	return 0;
//}

//#include<stdio.h>
//int print(int arr[],int n)
//{
//	int max=0;
//	int i=0;
//	for(i=0; i<n; i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[10]={1,5,3,2,4,6,9,7,8,0};
//	int sz;
//	sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	printf("%d\n",print(arr,sz));
//	return 0;
//}
#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")
int main(int argc, char ** argv)
{
    TCHAR fileName[] = "Maroon 5 - Lost Stars";
    TCHAR shortName[MAX_PATH];
    GetShortPathName(fileName, shortName, sizeof(shortName) / sizeof(TCHAR));
    TCHAR cmd[MAX_PATH+10];
    wsprintf(cmd, "play %s", shortName);
    mciSendString(cmd,NULL, 0, NULL);
    printf("Currently playing: %s\n", cmd);
    Sleep(5 * 60 * 1000);
 
    return 0;
}