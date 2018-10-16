#include"game.h"
void menu()
{
	printf("****************\n");
	printf("*** 1.游戏开始**\n");
	printf("*** 2.游戏退出**\n");
	printf("****************\n");


}
void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	DisplayBoard(show,ROW,COL);
	
	Setmine(mine,ROW,COL);
	/*DisplayBoard(mine,ROW,COL);*/
	FindMine(mine,show,ROW,COL);





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
			}
	}while(input);
return 0;
}