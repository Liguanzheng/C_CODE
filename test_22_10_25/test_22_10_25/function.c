# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
void hex()
{
	int n;
	scanf("%d", &n);
	char ch[100] = "0";
	int i = 0;
	for(i=0;i<99;i++)
	{
		ch[i] = ' ';
	}
	
	do
	{
		i--;
		int r = n % 16;
		if (r >= 10)
		{
			ch[i] = r + 87;
		}
		else
			ch[i] = r + 48;
		n = n / 16;
		
	} while (n != 0);
	for (i = 0; i < 100; i++)
	{
		if (ch[i] != ' ')
			printf("%c", ch[i]);
	}
}
void dec()
{
	int n;
	scanf("%x", &n);
	char ch[20] = " ";
	int i = 0;
	for(i=0;i<19;i++)
	{
		ch[i] = ' ';
	}
	do
	{
		i--;
		int r = n % 10;
		ch[i] = r + 48;
		n = n / 10;
	} while (n != 0);
	for (i = 0; i < 20; i++)
	{
		if (ch[i] != ' ')
			printf("%c", ch[i]);
	}
}
void string(int n,char ch[])
{
	int r = n % 10;
	static int i = 0;
	if (n/10 != 0)
	{
		string(n / 10,&ch[i]);
		i++;
	}
	ch[i] = r+48;
}
