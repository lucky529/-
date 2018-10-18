#include"game.h"
void menu()
{
	printf("******************\n");
	printf("***1.游戏开始*****\n");
	printf("***0.游戏退出*****\n");
	printf("******************\n");

}
void game()
{
	char Board[ROW][COL]={0};
	char ret;
	InitBoard(Board,ROW,COL);
	DisplayBoard(Board,ROW,COL);
	while(1)
	{
		Computermove(Board,ROW,COL);
		ret=IsWin(Board,ROW,COL);
		if(ret !=' ')
			break;
		DisplayBoard(Board,ROW,COL);
        Playermove(Board,ROW,COL);
		ret=IsWin(Board,ROW,COL);
		if(ret !=' ')
			break;
		DisplayBoard(Board,ROW,COL);
	}
	if(ret=='X')
	{
		printf("电脑赢\n");
	}
	else if(ret=='0')
	{
		printf("玩家赢\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
	}
	DisplayBoard(Board,ROW,COL);
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;

		}
	}while(input);
	return 0;
}
