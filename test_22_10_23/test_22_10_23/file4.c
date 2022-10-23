# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
static void put(char str[])
{
	int i = 0;
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c", str[i]);
	}
}