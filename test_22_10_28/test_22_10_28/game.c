# define _CRT_SECURE_NO_WARNINGS 1
# include"game.h"
int set_mine_board(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0, j = 0;
	for(i=0;i<rows;i++)
	{
		for (j = 0;j<cols;j++)
		{
			board[i][j] = set;
		}
	}
}
void printboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for(i=0;i<=col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ", i);
		for(j=1;j<=col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int i = rand() % row+1;
		int j = rand() % col+1;
		if(board[i][j]=='0')
		{
			board[i][j] = '1';
			count--;
		}
	}
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("ÇëÊäÈë×ø±ê£º");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("±§Ç¸£¬Äã±»Õ¨ËÀÁË\n");
				printboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count=set_mine_board(mine, x, y);
				show[x][y] = count + '0';
				printboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("ÊäÈë´íÎó£¬ÔÙÊäÒ»´Î\n");
		}
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦£¡\n");
		printboard(mine, ROW, COL);
	}
}
