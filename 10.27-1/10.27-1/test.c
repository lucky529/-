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
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;
	while(win<row*col-EASY_Count)
	{
		printf("ÇëÊäÈë×ø±ê\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<row&&y>=1&&y<col)
		{
			if(mine[x][y]=='1')
			{
				printf("Äã±»Õ¨ËÀÁË\n");
				DisplayBoard(show,row,col);
				break;
			}
			else
			{
				int count=GetmineCount(mine,x,y);
				show[x][y]=count+'0';
				DisplayBoard(show,row,col);
				win++;
			}
		}
		else
		{
			printf("ÊäÈëÓÐÎó\n");
		}
		if(win=row*col-EASY_Count)
		{
			printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦\n");
		}
	}
}
int GetmineCount(char mine[ROWS][COLS],int x,int y)
{
	return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]-8*'0';

}