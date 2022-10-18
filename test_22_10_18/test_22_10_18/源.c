# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
void my_strcat(char c1[],char c2[])
{
	int i = 0;
	int sz = strlen(c1);
	for (i = sz; c2[i - sz] != '\0'; i++)
	{
		c1[i] = c2[i - sz];
	}
	c1[i] = '\0';
}
int my_strcmp(char c1[], char c2 [])
{
	int i = 0;
	for (i = 0;; i++)
	{
		if (c1[i] != c2[i])
			return c1[i] - c2[i];
		else if (c1[i] =='\0' &&c2[i] == '\0')
			return 0;
	}
}
void my_strcpy(char c1[], char c2[])
{
	int i = 0;
	for (i = 0;c2[i]!='\0';i++)
	{
		c1[i] = c2[i];
	}
	c1[i] = c2[i];
}
int main()
{
	/*char c[18] = { 0 };
	int i = 0;
	for(i=0;i<17;i++)
	{
		c[i] = ' ';
	}
	c[17] = '\0';
	c[0] = c[2] = c[4] = c[6] = c[8] = '*';
	for(i=0;i<=6;i+=2)
	{
		printf("%s\n", c);
		char t = c[i];
		c[i] = c[10+ i];
		c[10 + i] = t;
		if (i == 6)
			printf("%s\n", c);
	}*/
	/*char c[100] = { 0 };
	gets(c);
	printf("密码：%s\n", c);
	int i = 0;
	for(i=0;c[i]!='\0'; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			
				c[i] = (char)(25+65 - c[i] + 'A');
		}
		else if (c[i] >= 'a' && c[i] <= 'z')
			{
				
					c[i] = (char)(25+97 - c[i] + 'a');
			}
	}
	printf("原文%s\n", c);*/
	/*char c[3][80] = { 0 };
	gets(c[0]);
	gets(c[1]);
	gets(c[2]);
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		int u = 0, l = 0,n = 0, s = 0, o = 0;
		for (j = 0; c[i][j] != '\0'; j++)
		{
			if (c[i][j] >= 'A' && c[i][j] <= 'Z')
				u++;
			else if (c[i][j] >= 'a' && c[i][j] <= 'z')
				l++;
			else if (c[i][j] >= '0' && c[i][j] <= '9')
				n++;
			else if (c[i][j] == ' ')
				s++;
			else
				o++;
		}
		printf("第%d行有%d个大写字母，%d个小写字母，%d个数字，%d个空格，%d个其他字符。\n", i+1, u, l, n, s, o);
	}*/
	/*char c1[100] = "asdsf ";
	char c2[10] = "wsd5 ";
	strcat(c1, c2);
	printf("%s", c1);*/
	/*char c1[100] = { 0 };
	char c2[10] = { 0 };
	gets(c1);
	gets(c2);
	my_strcat(c1, c2);
	printf("%s\n", c1);*/
	/*char c1[100] = {0};
	char c2[100] = {0};
	gets(c1);
	gets(c2);
	printf("%d\n", my_strcmp(c1, c2));*/
	char c1[100] = { 0 };
	char c2[100] = { 0 };
	gets(c1);
	gets(c2);
	my_strcpy(c1, c2);
	printf("%s\n", c1);
	return 0;
}