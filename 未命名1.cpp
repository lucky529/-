#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*************************\n");
	printf("*******  1. play  *******\n");
	printf("*******  0. exit  *******\n");
	printf("*************************\n");
}

void game()
{
	int num = 0;
	int ret = rand()%100+1;
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &num);
		if(num == ret)
		{
			printf("静静，你真是头猪\n");
			break;
		}
		else if(num > ret)
		{
			printf("大傻子你猜大了\n");
		}
		else
		{
			printf("大傻吊你猜小了\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
