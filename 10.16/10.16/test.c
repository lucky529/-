#include"game.h"
void menu()
{
	printf("******************\n");
	printf("***1.��Ϸ��ʼ*****\n");
	printf("***0.��Ϸ�˳�*****\n");
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
		printf("����Ӯ\n");
	}
	else if(ret=='0')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
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
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("������������������\n");
			break;

		}
	}while(input);
	return 0;
}
