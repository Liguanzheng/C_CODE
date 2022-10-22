# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <assert.h>
# include <math.h>
# include <string.h>
float Max = 0;
float Min = 0;
int a = 3, b = 5;
float x2 = 0;
float x1 = 0;
int age(int n)
{
	if (n == 1)
		return 10;
	else
		return 2+age(n - 1);
}
int main()
{
	/*int age(int);
	printf("%d\n", age(5));
	return 0;*/
	/*long fac(int);
	int n = 0;
	scanf("%d", &n);
	printf("%ld\n", fac(n));*/
	/*long double hanoi(int);
	int n ;
	scanf("%d", &n);
	printf("%lf\n", hanoi(n));*/
	/*void hanoi(int, char, char, char);
	int n = 0;
	char one = 'A', two = 'B', three = 'C';
	scanf("%d", &n);
	hanoi(n, one, two, three);*/
	/*int find(int arr[]);
	int arr[10] = { 0 };
	int i = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	i = find(arr);
	printf("Max=%d,是第%d个数\n", Max, i+1);*/
	/*int max(int, int);
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m = arr[0];
	int n = 0;
	for (i = 0; i < 10; i++)
	{
		if (max(m, arr[i]) > m)
		{
			m = max(m, arr[i]);
			n = i;
		}
	}
	printf("max=%d,是第%d个数\n", m, n+1);*/
	/*float aver(float score[]);
	float score[10] = { 0 };
	int i = 0;
	for(i=0;i<10;i++)
	{
		scanf("%f", &score[i]);
	}
	printf("%f\n", aver(score));*/
	/*float average(float score[], int);
	float score1[5] = { 0 };
	float score2[3] = { 0 };
	int i = 0;
	printf("输入1班成绩：\n");
	for(i=0;i<5;i++)
	{
		scanf("%f", &score1[i]);
	}
	printf("输入2班成绩:\n");
	for(i=0;i<3;i++)
	{
		scanf("%f", &score2[i]);
	}
	float aver1 = average(score1, sizeof(score1) / sizeof(score1[0]));
	float aver2 = average(score2, sizeof(score2) / sizeof(score2[0]));
	printf("1班平均分为：%f\n", aver1);
	printf("2班平均分为：%f\n", aver2);
	return 0;*/
	/*void sort(int arr[],int);
	int arr[10] = { 0 };
	int i = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr,10);
	for(i=0;i<10;i++)
	{
		printf("%d\t", arr[i]);
	}*/
	/*int maxf(int arr[][4]);
	int arr[3][4] = { 0 };
	int i = 0, j = 0;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	int max = maxf(arr);
	printf("%d\n", max);*/
	/*float aver1(float score[]);
	float score[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);
	float aver = aver1(score);
	printf("aver=%f,max=%f,min=%f\n", aver, Max, Min);*/
	/*int max1(int, int);
	int a = 8;
	printf("%d\n", max1(a, b));
	printf("%d,%d\n", a,b);
	return 0;*/
	/*int div(int, int);
	int mul(int, int);
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int max=div(a, b);
	int min=mul(a, b);
	printf("最小公倍数：%d,最大公约数：%d\n", min, max);*/
	/*void root1(float, float, float);
	void root2(float, float, float);
	void root3(float, float, float);
	float a = 0, b = 0, c = 0;
	scanf("%f%f%f", &a, &b, &c);
	float r = b * b - 4 * a * c;
	if (r > 0)
	{
		root1(a, b, r);
		printf("%f,%f\n", x1, x2);
	}
	else if (r == 0)
	{
		root2(a, b, r);
		printf("%f,%f\n", x1,x2);
	}
	else
		root3(a, b, r);*/
	/*int pri(int);
	int n = 0;
	scanf("%d", &n);
	if (pri(n) == 1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n", n);*/
	/*void switch1(int arr[][3], int, int);
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	switch1 (arr,3,3);
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}*/
	/*void reverse(char ch[], int sz);
	char ch[100] = "";
	gets(ch);
	int sz = strlen(ch) - 1;
	reverse(ch,sz);
	puts(ch);*/
	/*void my_strcat(char ch1[], char ch2[]);
	char ch1[100] = "";
	char ch2[100] = "";
	gets(ch1);
	gets(ch2);
	my_strcat(ch1, ch2);
	printf("%s\n", ch1);*/
	/*void sort2(char ch[]);
	char ch[11] = "";
	gets(ch);
	sort2(ch,11);
	printf("%s", ch);*/
	void copy(char ch2[], char ch1);
	char ch1[100] = "";
	char ch2[100] = "";
	copy(ch2, ch1);
	puts(ch2);
	return 0;
}
long fac (int n)
{
	/*int c = 0;
	if (n == 1)
		c = 1;
	else
		c = n*fac(n - 1);
	return c;*/
	assert(n >= 0);
	int c = 0;
	/*int c;
	if (n < 0)
		printf("error\n");*/
	 if (n == 0 || n == 1)
		c = 1;
	else
		c = n * fac(n - 1);
	return c;
}
long double hanoi1(int n)
{
	long double count = 0;
	if (n == 3)
		return 7;
	count = count+2*hanoi1(n - 1);
	count++;
	return count;
}
void hanoi(int n,char one,char two, char three)
{
	void move(one, three);
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void move(char one,char three)
{
	printf("%c-->%c\n", one, three);
}
int find(int arr[])
{
	int i = 0, j = 0;
	Max = arr[0];
	for(i=0;i<10;i++)
	{
		if(Max<arr[i])
	{
		j = i;
		Max = arr[i];
	}
	}
	return j;
}
int max(int x,int y)
{
	return (x > y ? x : y);
}
float aver(float score [])
{
	int i = 0;
	float sum = 0;
	for(i=0;i<10;i++)
	{
		sum += score[i];
	}
	return (sum / (i + 1));
}
float average(float score[],int n)
{
	float sum = 0;
	int i = 0;
	for(i=0;i<n;i++)
	{
		sum += score[i];
	}
	float aver = sum / (i + 1);
	return aver;
}
void sort(int arr[],int n)
{
	int i = 0,j=0;
	for(i=0;i<n-1;i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (arr[i]> arr[j])
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}
int maxf(int arr[][4])
{
	int max = arr[0][0];
	int i = 0, j = 0;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{if(max<arr[i][j])
		{
			max = arr[i][j];
		}
		}
	return max;
}
float aver1(float score[])
{
	Max = score[0];
	Min = score[0];
	float sum = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		sum += score[i];
		if (Max < score[i])
			Max = score[i];
		else if (Min > score[i])
			Min = score[i];
	}
	return (sum / i + 1);
}
int max1(int a, int b)
{
	a=5,b = 9;
	return (a > b ? a : b);
}
int div(int a,int b)
{
	int r = 0;
	while (r = a % b)
	{
		a = b;
		b = r;
	}
	return b;
}
int mul(int a, int b)
{
	int max = (a > b ? a : b);
	int min = (a < b ? a : b);
	int i = 0;
	for(i=1;;i++)
	{
		if ((max * i) % min == 0)
		{
			return (max*i);
		}
	}
}
void root1(float a,float b,float r)
{
	x1 = ( - b + sqrt(r) )/ 2 * a;
	x2 = (-b - sqrt(r)) / 2 * a;
}
void root2(float a,float b,float r)
{
	x1 = x2 = -b / (2 * a);
}
void root3(float a,float b,float r)
{
	printf("无根\n");
}
int pri(int n)
{
	assert(n >= 2);
	int i = 2;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void switch1(int arr[][3],int x,int y)
{
	int arr2[3][3] = { 0 };
	int i = 0, j = 0;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			arr2[i][j] = arr[j][i];
		}
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			arr[i][j] = arr2[i][j];
		}
}
void reverse(char ch[],int sz)
{
	int i = 0;
	int mid = (sz / 2);
	for(i=0;i<=sz;i++,sz--)
	{
		char t = ch[i];
		ch[i] = ch[sz];
		ch[sz] = t;
	}
}
void my_strcat(char ch1[],char ch2[])
{
	int i = 0;
	for (i = 0; ch1[i] != '\0'; i++)
	{ }
	int j = 0;
	for(j=0;ch2[j]!='\0';j++)
	{
		ch1[i + j] = ch2[j];
	}
}
void sort2(char ch1[],int n)
{
	int i = 0;
	int j = 0;
	for(i=0;i<n-1;i++)
	{
		for (j = 0;j<n-1;j++)
		{
			if (ch1[j] > ch1[j + 1])
			{
				if (ch1[j + 1] == '\0')
					break;
				char t = ch1[j];
				ch1[j] = ch1[j + 1];
				ch1[j + 1] = t;
			}
		}
	}
}
void copy(char ch2[], char ch1[])
{
	int i = 0,j=0;
	for (i = 0; ch1[i] != '\0'; i++)
	{
		if (ch1[i] == 'A' || ch1[i] == 'E' || ch1[i] == 'I' || ch1[i] == 'O' || ch1[i] == 'U' || ch1[i] == 'a' || ch1[i] == 'e' || ch1[i] == 'i' || ch1[i] == 'o' || ch1[i] == 'u')
		{
			ch2[j] = ch1[i];
			j++;
		}
	}
}