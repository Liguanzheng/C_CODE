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
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�������������ѡ��\n");
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