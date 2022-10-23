# define _CRT_SECURE_NO_WARNINGS 1
int b = 3;
int Word = 0;
int Num = 0;
int Spa = 0;
int Oth = 0;
# include<stdio.h>
# include<assert.h>
int fac(int a,int m)
{
	int i = 0;
	int n = 1;
	for(i=0;i<m;i++)
	{
		n = n * a;
	}
	return n;
}
void get(char str[])
{
	int i = 0;
	for(i=0;;i++)
	{
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;
	}
}
void putch(char ch[])
{
	int i = 0;
	for (i = 0; ch[i] != '\0'; i++);
	int n = i;
	for (i = 0; ch[i] != '\0'; i+=2)
	{
		assert(ch[i] >= '0' && ch[i] <= '9');
		for(int j=n+i-1;j>=i+1;j--)
		{
			char t = ch[j];
			ch[j] = ch[j +1];
			ch[j + 1] = t;
		}
		ch[i + 1] = ' ';
	}
}
void count(char ch[])
{
	int i = 0;
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z')
			Word++;
		else if (ch[i] >= '0' && ch[i] <= '9')
			Num++;
		else if (ch[i] == ' ')
			Spa++;
		else
			Oth++;
	}
}