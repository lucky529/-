#include"game.h"
void menu()
{
	printf("****************\n");
	printf("*** 1.��Ϸ��ʼ**\n");
	printf("*** 2.��Ϸ�˳�**\n");
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
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("������������������\n");
			}
	}while(input);
return 0;
}