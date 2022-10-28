#pragma once
# define ROW 9
# define COL 9
# define ROWS ROW+2
# define COLS COL+2
# define EASY_COUNT 10
# include<stdio.h>
# include<stdlib.h>
# include<time.h>
void initboard(char board[ROWS][COLS],int rows,int cols,char set);
void printboard(char board[ROWS][COLS],int row,int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int set_mine_board(char mine[ROWS][COLS], int row, int col);