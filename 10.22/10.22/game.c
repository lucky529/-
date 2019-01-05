#include"game.h"





void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set)

{

 int i=0;

 int j=0;

 for(i=0; i<rows; i++)

 {

	 for(j=0; j<cols ;j++)

	 {

		 arr[i][j]=set;

	 }

 }

}

void DisplayBoard(char arr[ROWS][COLS],int row,int col)

{

	int i=0;

	int j=0;

	for(i=0; i<=row; i++)

	{

		printf("%d ",i);

	}

	printf("\n");

	for(i=1; i<=row; i++)

	{

		printf("%d ",i);

		for(j=1; j<=col; j++)

		{

			printf("%c ",arr[i][j]);

		}

		printf("\n");

	}

}

void Setmine(char arr[ROWS][COLS],int row,int col)

{

	int count=EASY_Count;

	while(count)

	{

		int x=rand()%ROW+1;

		int y=rand()%COL+1;

		if(arr[x][y]=='0')

		{

			arr[x][y]='1';

			count--;

		}

	}

}

int GetmineCount(char mine[ROWS][COLS],int x,int y)

{

	return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]-8*'0';



}
void OpenMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int x,int y)
{
	int ret=0;
	ret=GetmineCount(mine,x,y);
	if(ret==0)
	{
		show[x][y]=' ';
		if( x-1>0 && y>0 &&show[x-1][y]=='*' )
		{
			OpenMine(mine,show,row,col,x-1,y);
		}
		if( x-1>0 && y-1>0 &&show[x-1][y-1]=='*' )
		{
			OpenMine(mine,show,row,col,x-1,y-1);
		}
		if( x>0 && y-1>0 &&show[x][y-1]=='*' )
		{

			OpenMine(mine,show,row,col,x,y-1);
		}
		if( x+1<=row && y-1>0 &&show[x+1][y-1]=='*' )
		{
			OpenMine(mine,show,row,col,x+1,y-1);
		}
		if( x+1<=row && y>0 &&show[x+1][y]=='*' )
		{
			OpenMine(mine,show,row,col,x+1,y);
		}
		if( x+1<=row && y+1<=col &&show[x+1][y+1]=='*' )
		{
			OpenMine(mine,show,row,col,x+1,y+1);
		}
		if( x>0 && y+1<=col &&show[x][y+1]=='*' )
		{
			OpenMine(mine,show,row,col,x,y+1);
		}
		if( x-1>0 && y+1<=col &&show[x-1][y+1]=='*' )
		{
			OpenMine(mine,show,row,col,x-1,y+1);
		}
	}
	else
	{
		show[x][y]=GetmineCount(mine,x,y)+'0';
	}
}
void SafeMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int ret=1;
	int ch=0;
	printf("请输入要排查的坐标\n");
	scanf("%d%d",&x,&y);
	if(mine[x][y]=='1')
	{
		mine[x][y]='0';
		ch=GetmineCount(mine,x,y);
		show[x][y]=ch+'0';
		while(ret)
		{
			x=rand()%ROW+1;

		    y=rand()%COL+1;
			if(mine[x][y]=='0')
			{
				mine[x][y]='1';
			}
			ret--;

		}
	}
          OpenMine(mine,show,row,col,x,y);
		  DisplayBoard(show,row,col);
}
int IsWin(char show[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	int count=0;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			if(show[i][j]=='*')
			{
				count++;
			}
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)

{

	int x=0;

	int y=0;

	int win=0;

	while(1)

	{

		printf("请输入坐标\n");

		scanf("%d%d",&x,&y);

		if(x>=1&&x<=row&&y>=1&&y<=col)

		{

			if(mine[x][y]=='1')

			{

				printf("你被炸死了\n");

				DisplayBoard(show,row,col);

				break;

			}

			else

			{

				int c=GetmineCount(mine,x,y);

				show[x][y]=c+'0';

				OpenMine(mine,show,row,col,x,y);

				DisplayBoard(show,row,col);

				if(IsWin(show,row,col)==EASY_Count)
				{
					break;
				}

			}

		}

		else

		{

			printf("输入有误\n");

		}

		

	}
	if(IsWin(show,row,col)==EASY_Count)

		{

			printf("恭喜你，排雷成功\n");
			DisplayBoard(mine,ROW,COL);

		}

}

