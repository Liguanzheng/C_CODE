# define _CRT_SECURE_NO_WARNINGS 1

# include "game.h"
void menu()
{
	printf("****************************\n");
	printf("*******1.play  0.exit*******\n");
	printf("****************************\n");
}
void game ()
{
	char board[ROW][COL] = { 0};
	intboard(board, ROW, COL);
	printboard(board, ROW, COL);
	int ret = 0;
	while(1)
	{
		playermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = Win(board,ROW,COL);
		if (ret != 'c')
			break;
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = Win(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if(ret=='q')
		printf("ƽ��\n");
}
void test()
{
	int p = 0;
	do
	{
		menu();
		srand((unsigned)time(NULL));
		printf("��ѡ��:");
		scanf("%d", &p);
		switch (p)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
		}
	} while (p);
}
int main()
{
	test();
	return 0;
}