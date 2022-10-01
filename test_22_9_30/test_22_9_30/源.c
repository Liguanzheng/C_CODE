# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# include <string.h>
int count = 0;
void menu()
{
	printf("*******************************\n");
	printf("********1.play  0.exit*********\n");
	printf("*******************************\n");
}
void game ()
{
	int n =-1;
	int ret = rand()%100+1;
	while (n != ret)
	{
		printf("\n请输入");
		scanf("%d", &n);
		if (n > ret)
		{
			printf("\n猜大了");
		}
		if(n<ret)
		{
			printf("\n猜小了");
		}
		getchar();
	}
	if (n == ret)
		printf("\n猜对了");
}
int my_strlen(char* arr)
{
	if ((*arr) != '\0')
		return 1 + my_strlen(arr + 1);
	else
		return 0;
}
int Fac2(int n)
{
	
	if (n > 1)
		return n * Fac2(n - 1);
	else if(n<=1)
		return 1;
}
int Fb(int n)
{
	if (n == 3)
		count++;
	if (n == 1||n==2)
		return 1;
	else
	{
		return Fb(n-1) + Fb(n - 2);
	}
}
int Fb2(int n)
{
	int a=1, b=1,i;
	int c = a + b;
	/*if (n > 3)
	{
		for (i = 1; i <= (n - 3); i++)
		{
			
			
			a = b;
			b = c;
			c = a + b;
		}
		return c;
	}
	else if (n == 3)
		return 2;
	else
		return 1;*/
	if (n > 2)
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
	else
		return 1;
}
void test(int n)
{if(n<10000)
{
	test(n++);
}
}
int main()
{
	/*int i;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择：");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (i);
	return 0;*/
	//int main()
	//{int i;
	//scanf("%d", &i);
	//printf("\n%d", i);
	//again:
	//	printf("hello");
	//	goto again;
	//
	//
	//	printf("hello1");
	//
	//	printf("hello2");
		/*char input[20] = {0};
		system("shutdown -s -t 60");
		again:
		printf("输入：我是个傻逼\n");
		scanf_s("%s", input,sizeof(input));
		if(strcmp(input,"我是个傻逼")==0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
		return 0;*/
	/*int len = 0;
	char arr[] = { "bit" };
	len = my_strlen(&arr);
	printf("%d", len);*/
	//int i = 1,n;
	//long p = 1;
	//scanf("%d", &n);
	///*for(i=1;i<=n;i++)
	//{
	//	p = p * i;
	//}
	//printf("\n%d", p);*/
	//p = Fac2(n);
	//printf("\n%d", p);
	/*int n;
	scanf("%d", &n);
	n = Fb2(n);
	printf("%d", n);
	printf("\n%d", count);*/
	test(1);
	return 0;
}