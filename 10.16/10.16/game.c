#include"game.h"
void InitBoard(char Board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0; i<row; i++)
	{
		int j=0;
		for(j=0; j<col; j++)
			Board[i][j]=' ';
	}
}
void DisplayBoard(char Board[ROW][COL],int row,int col)
//{
//	int i=0;
//	for(i=0; i<row; i++)
//	{
//		printf(" %c | %c | %c \n",Board[i][0],Board[i][1],Board[i][2]);
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//}
{
	int i=0;
	for(i=0; i<row; i++)
	{
		int j=0;
		for(j=0; j<col; j++)
		{
			printf(" %c ",Board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
		{
		for(j=0; j<col; j++)
		{
			printf("---");
		if(j<col-1)
			printf("|");
		}
		printf("\n");}
		
	}
}
void Computermove(char Board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("������\n");
	while(1)
	{
		x=rand()%row;
	    y=rand()%col;
	if(Board[x][y]==' ')
	 {
		Board[x][y]='X';
		break;

	 }
 }
}
void Playermove(char Board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����\n");
	while(1)
	{
		printf("����������\n");
	    scanf("%d%d",&x,&y);
	if(x>=1&&x<=row&&y>=1&&y<=col)
	{
		if(Board[x-1][y-1]==' ')
		{
			Board[x-1][y-1]='0';
			break;
		}
		else
		{
			printf("���걻ռ������������\n");
		}

	}
	else
	{
		printf("������������������\n");
	}
	}
}

char IsWin(char Board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0; i<row; i++)
	{
        if(Board[i][0]==Board[i][1]&&Board[i][1]==Board[i][2]&&Board[i][0]!=' ')
			return Board[i][0];
	}
	for(i=0; i<col; i++)
	{
        if(Board[0][i]==Board[1][i]&&Board[1][i]==Board[2][i]&&Board[0][i]!=' ')
			return Board[0][i];
	}
	if(Board[0][0]==Board[1][1]&&Board[1][1]==Board[2][2]&&Board[2][2]!=' ')
	{
		return Board[1][1];
	}

	if(Board[0][2]==Board[1][1]&&Board[1][1]==Board[2][0]&&Board[2][0]!=' ')
	{
		return Board[1][1];
	}
	if(IsFull(Board,row,col))
	{
		return 'Q';
	}
	return ' ';

}
int IsFull(char Board[ROW][COL],int row,int col)
	{
		int i=0;
		for(i=0; i<row; i++)
		{
			int j=0;
			for(j=0; j<col; j++)
			{
				if(Board[i][j]==' ')
					return 0;

			}
		}
		return 1;

	}
