# define _CRT_SECURE_NO_WARNINGS 1
# include"game.h"
int main()
{
	void test();
	srand((unsigned)time(NULL));
	test();
	return 0;
}
void test()
{
	void menu();
	void game();
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，请重新选择：\n");
			break;
		}
	}
	while (input);
}
void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	setmine(mine, ROW, COL);
	printboard(show, ROW, COL);
	findmine(mine, show, ROW, COL);
}