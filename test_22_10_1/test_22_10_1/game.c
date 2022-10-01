# define _CRT_SECURE_NO_WARNINGS 1
# include "game.h"
void intboard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for(i=0;i<row;i++)
	{
		for (j = 0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}
int Full(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for(i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void printboard(char board[ROW][COL], int row, int col)
{
	int i = 0,j = 0;
	for(i=0;i<row;i++)
	{
		/*printf(" %c | %c | %c \n", board[i][0],board[i][1],board[i][2]);
		if (i<row-1)
		printf("---|---|---\n");*/
		
			for (j = 0; j < col; j++)
			{
				if (j < col - 1)
					printf(" %c |", board[i][j]);
				else
					printf(" %c \n", board[i][j]);
			}
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)
				{
					if (j < col - 1)
						printf("---|");
					else
						printf("---\n");
				}
			}
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0, y = 0;
		printf("玩家走\n");
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该坐标已被占用，请重新输入\n");
		}
		else
			printf("坐标非法，请再输一次\n");
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			break;
		}
	}
}
char Win(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for(i=0;i<row;i++)
	{
		for (j = 0;j<col-1;j++)
		{
			if ((board[i][j] != board[i][j + 1])|| (board[i][j] == ' '))
				break;
			else if (j == col - 2)
				return board[i][j];
		}
	}
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 1; i++)
		{
			if ((board[i][j] != board[i+1][j])||(board[i][j] == ' '))
				break;
			else if (i == col - 2)
				return board[i][j];
		}
	}
	 i = 0, j = 0;
	while(i<row-1)
	{
		
		if (i < row - 1)
		{
			if ((board[i][j] != board[i + 1][j + 1]) || (board[i][j] == ' '))
				break;
		}
		if(i == row - 2)
		return board[0][0];
			i++;
			j++;
	}
	 i = 0, j = 0;
	while (row>0)
	{
		if (row > 0)
		{
			if ((board[row-1][j] != board[row - 2][j + 1]) || (board[row-1][j] == ' '))
				break;
		}
		if (row == 2)
			return board[0][col-1];
		row--;
		j++;
	}
	if (Full(board, ROW, COL))
		return 'q';
	else
		return 'c';
}