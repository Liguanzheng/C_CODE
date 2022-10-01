#pragma once
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# define ROW 3
# define COL 3
void intboard(char board[ROW][COL], int row, int col);
void printboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char Win(char board[ROW][COL], int row, int col);
int Full(char board[ROW][COL], int row, int col);