#include"game.h"
void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set)
{
	int i=0;
	for(i=0; i<rows; i++)
	{
		int j=0;
		for(j=0; j<cols; j++)
		{
			arr[i][j]=set;	
	
		}printf("\n");	
	}
}
void DisplayBoard(char arr[ROWS][COLS],int row,int col)
{
	int i=0;
	for(i=0; i<row; i++)
	{
		int j=0;
			for(j=0; j<col; j++)
			{
				printf("%d",arr[i][j]);
			}

	}
}
void Setmine(char arr[ROWS][COLS],int row,int col)
{
	int count=EASY_count;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(arr[x][y]=='0')
		{
			arr[x][y]='1';
			count--;
		}
	}
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
    int win=0;
	while(win<row*col-EASY_count)
	{
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			printf("ÇëÊäÈë×ø±ê\n");
		    scanf("%d%d",&x,&y);
			if(mine[x][y]='1')
			{
				printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÁË\n");
				DisplayBoard(show,row,col);
			}
			else
			{
				int count=GetmineCount(mine,x,y);
				show[x-1][y-1]=count+'0';
				DisplayBoard(show,row,col);
				win++;
			}

		}
		else
		{
			printf("ÊäÈëÓÐÎó");
		}
	}printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦\n");

}
int GetmineCount(char mine[ROWS][COLS],int x,int y)

{

	return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]-8*'0';



}