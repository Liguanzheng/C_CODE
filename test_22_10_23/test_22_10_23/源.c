# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include<string.h>
# include<math.h>
char* Max = NULL;
float X1 = 0;
float X2 = 0;
int main()
{
	/*int f(int);
	int a = 2, i;
	for(i=0;i<3;i++)
	{
		printf("%d\n", f(a));
	}
	return 0;*/
	/*int fac(int);
	int i = 0;
	for(i=1;i<=5;i++)
	{
		printf("%d\t", fac(i));
	}*/
	/*int max_();
	extern A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	int max = max_();
	printf("%d\n", max);*/
	/*extern b;
	int fac(int a, int m);
	int a = 0, m = 0;
	scanf("%d%d", &a, &m);
	printf("%d,%d\n", a * b, fac(a, m));*/
	/*extern void get(char str[]);
	extern void cancel(char str[], char c);
	extern void put(char str[]);
	char str[100] = "";
	printf("请输入字符串：\n");
	get(str);
	printf("请输要删的字符：\n");
	char c=0;
	c=getchar();
	cancel(str,c);
	put(str);*/
	/*void putch(char ch[]);
	char ch[100] = "";
	gets(ch);
	putch(ch);
	puts(ch);*/
	/*void count(char ch[]);
	extern Word, Num, Spa, Oth;
	char ch[100] = "";
	gets(ch);
	count(ch);
	printf("word=%d,num=%d,spa=%d,oth=%d\n", Word, Num, Spa, Oth);*/
	/*void putlong(char ch[]);
	char ch[100] = "";
	gets(ch);
	putlong(ch);
	return 0;*/
	/*float root(int a, int b, int c, int d, float n);
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	float x=root(a, b, c, d, 1.0);
	printf("%f\n", x);*/
	/*float P(int n, float x);
	int n = 0;
	float x;
	scanf("%d%f", &n, &x);
	float p = P(n,x);
	printf("%f\n", p);
	return 0;*/
	/*float average(float score[]);
	float Average(float score3[]);
	void max(float score[][3]);
	float o(float score1[], int n);
	float score[2][3] = { 0 };
	float score1[2] = { 0 };
	float score2[3] = { 0 };
	int i = 0;
	int j = 0;
	for(i=0;i<2;i++)
	{
		printf("输入第%d个学生成绩：\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &score[i][j]);
		}
		score1[i] = average(score[i]);
	}
	for(i=0;i<2;i++)
	{
		printf("第%d个学生平均分：%f\n",i+1 ,score1[i]);
	}
	for(j=0;j<3;j++)
	{
		float score3[2];
		for (i = 0;i<2;i++)
		{
			score3[i] = score[i][j];
		}
		score2[j] = Average(score3);
		printf("第%d科平均分：%f\n",j+1, score2[j]);
	}
	max(score);
	float f=o(score1,2);
	printf("平均分方差为：%f",f);
	return 0;*/
	/*void input(char name[][10], int num[]);
	void sort(char name[][10], int num[]);
	void put(char name[][10], int num[]);
	int find(int num[], int nu, int n);
	char name[3][10] = { 0 };
	int num[3] = { 0 };
	printf("输入姓名，职工号：\n");
	input(name, num);
	sort(name, num);
	put(name, num);
	printf("输入要找的职工的号:\n");
	int nu = 0;
	scanf("%d", &nu);
	int n=find(num,nu,3);
	if (n != (-1))
		printf("姓名：%s\n", name[n]);
	else
		printf("无该职工\n");*/
	
}
int A, B, C;
int f(int a)
{
	auto int b = 0;
	static int c = 3;
	b++;
	c++;
	return (a + b + c);
}
int fac1(int x)
{
	static int n = 1;
	n = n * x;
	return n;
}
int max_()
{
	int max = (A > B ? A : B);
	return (max > C ? max : C);
}
void putlong(char ch[])
{
	int i = 0;
	int j= 0;
	int count = 0;
	int max = 0;
	int n = 0;
	for(i=0;ch[i]!='\0'; i++)
	{
		count++;
		if(ch[i]==' '||ch[i]=='\0')
		{
			if (count > max)
			{
				max = count;
				n = j;
			}
			count = 0;
			j = i + 1;
		}
	}
	for(i=n;ch[i]!=' '&&ch[i]!='\0';i++)
	{
		printf("%c", ch[i]);
	}
}
float root(int a,int b,int c,int d,float n)
{
	float x = n;
	float t;
	do
	{
		t = x;
		x = x - (a * x * x * x + b * x * x + c * x + d) / (3 * a * x * x + 2 * b * x + c);
		
	} while (fabs(t - x) >1e-4);
	return x;
}
float P(int n,float x)
{
	float c;
	if (n == 0)
		c = 1;
	else if (n == 1)
		c = x;
	else
		c = ((2 * n - 1) * x - P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
	return c;
}
float average(float score[])
{
	float sum = 0;
	int i = 0;
	for(i=0;i<3;i++)
	{
		sum += score[i];
	}
	return sum / i;
}
float Average(float score3[])
{
	float sum = 0;
	int i = 0;
	for(i=0;i<2;i++)
	{
		sum += score3[i];
	}
	return sum / i;
}
void max(float score[][3])
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	float max = score[0][0];
	for(i=0;i<2;i++)
	{
		for (j = 0;j<3;j++)
		{
			if(max<score[i][j])
		{
			max = score[i][j];
			a = i;
			b = j;
		}
		}
	}
	printf("最高的分数对应第 % d个学生的第%d门课\n", a+1, b+1);
}
float o(float score1[],int n)
{
	int i = 0;
	float sum1 = 0, sum2 = 0;
	for(i=0;i<2;i++)
	{
		sum1 += score1[i];
		sum2 += score1[i] * score1[i];
	}
	float c = sum2 / n - (sum1 / n) * (sum1 / n);
	return c;
}
void input(char name[][10],int num[])
{
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		printf("姓名：\n");
		gets(name[i]);
		printf("职工号：\n");
		scanf("%d", &num[i]);
		getchar();
	}
}
void sort(char name[][10],int num[])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 2;i++)
	{
		for (j = 0;j<2-i;j++)
		{
			if(num[j]>num[j+1])
		{
			int t = num[j];
			num[j] = num[j + 1];
			num[j + 1] = t;
			char c[10] = { 0 };
			strcpy(c, name[j]);
			strcpy(name[j], name[j + 1]);
			strcpy(name[j+ 1], c);
		}
		}
	}
}
void put(char name[][10],int num[])
{
	int i = 0, j = 0, n = 0;
	char num1[3][10] = { 0 };
	int r = num[0];
	/*for(i=0;;i++)
	{
		r = r/ 10;
		n++;
		if (r == 0)
			break;
	}
	for(i=0;i<3;i++)
	{
		int r = num[i];
		for (j = 0;j<10;j++)
		{
			num1[i][n-j-1] = r/10+48;
			if (n - j - 1 == 0)
				break;
		}
	}*/
	for (i = 0; i < 3; i++)
	{
		printf("姓名：%s,职工号：%d\n", name[i], num[i]);
	}
}
int find(int num[],int nu,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (num[i] == nu)
			return i;
	}
	return (-1);
}