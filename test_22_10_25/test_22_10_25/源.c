# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>
int letter = 0, num = 0, space = 0, other = 0;
void test(char ch[])
{
	printf("%d", strlen(ch));
}
int main()
{
	/*int n = 0;
	scanf("%d", &n);
	printf("%o\n%x\n", n, n);
	return 0;*/
	/*int n;
	scanf("%d", &n);*/
	/*void hex();
	hex();*/
	/*void dec();
	dec();*/
	/*void string(int n, char ch[]);
	int n = 0;
	scanf("%d", &n);
	char ch[100] = "0";
	string(n,ch);
	printf("%s\n", ch);
	return 0;*/
	/*int yearday(int n, int m, int q);
	int n = 0, m = 0, q = 0;
	printf("输入年份：\n");
	scanf("%d", &n);
	printf("输入月份：\n");
	scanf("%d", &m);
	printf("输入日期：\n");
	scanf("%d", &q);
	int day = yearday(n, m, q);
	printf("%d\n", day);
	return 0;*/
	/*int a[10] = { 0 };
	int i = 0, j = 0, k = 0, t = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{if(a[j+1]>a[j])
		{
			t = a[j + 1];
			a[j + 1] = a[j];
			a[j] = t;
		}
		}
	for(i=0;i<10;i++)
	{
		printf("%d", a[i]);
	}
	return 0;*/
	/*int arr[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	int i = 0;
	int n = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("输数：\n");
	scanf("%d", &n);
	/*printf("输数组：\n");
	for(i=0;i<15;i++)
	{
		scanf("%d", &arr[i]);
	}
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == n)
		{
			printf("%d\n", mid + 1);
			break;
		}
		else if(arr[mid]>n)
		{
			left = mid;
			left++;
		}
		else
		{
			right= mid;
			right--;
		}
	}
	if (left > right)
		printf("无此数\n");
	return 0;*/
	/*int div(int n, int m);
	int mul(int n, int m);
	int n = 0, m = 0;
	scanf("%d%d", &n,& m);
	int max = div(n,m);
	int min = mul(n,m);
	printf("%d\n%d\n", max, min);
	return 0;*/
	/*int i = 0, j = 0, k = 0, flag = 1, max, maxj = 0,flag2 = 0;
	int arr[3][3] = { 0 };
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	for(i=0;i<3;i++)
	{
		max = arr[i][0];
		for(j=0;j<3;j++)
		{
			if(max<arr[i][j])
		{
			max = arr[i][j];
			maxj = j;
		}
		}
		for(k=0;k<3;k++)
		{
			if(max>arr[k][maxj])
		{
			flag = 0;
			break;
		}
		}
		if (flag == 1)
		{
			printf("The point is%d\n", max);
			flag2 = 1;
		}
	}
	if (flag2== 0)
		printf("There is no point\n");
	return 0;*/
	/*char ch[6] = "asdfg";
	test(ch);*/
	/*void count(char ch[]);
	char ch[100] = "0";
	/*scanf("%s", ch);
	printf("%s", ch);
	gets(ch);
	count(ch);
	printf("letter=%d,\nnum=%d,\nspace=%d,\nother=%d\n", letter, num, space, other);
	return 0;*/
	/*int i = 0, j = 0, k = 0;
	for(i=0;i<4;i++)
	{
		for (j = 0; j < 3 - i; j++)
			printf(" ");
		for(k=0;k<2*(i+1)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for(k=0;k<7-2*(i+1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;*/
	int divisor(int, int);
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int max = divisor(n, m);
	printf("%d\n",max);
	return 0;
}	
int yearday(int n,int m,int q)
{
	int Judge(int);
	int day = 0;
	int i = 0;
	for (i = 1; i <= m - 1; i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:day = day + 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:day = day + 30;
			break;
		case 2:if (Judge(n) == 1)
			day += 29;
			  else
			day += 28;
			break;
		}
	}
	return day + q;
}
int Judge(int n)
{
	if (n / 400 == 0 && n / 100 != 0)
		return 1;
	else if (n / 400 == 0)
		return 1;
	else
		return 0;
}
int div(int n, int m)
{
	int r = (n < m ? n : m);
	while (!(m % r == 0 && n % r == 0))
			r--;
	return r;
}
int mul(int n,int m)
{
	int r = (n > m ? n : m);
	while (!(r % m == 0 && r % n == 0))
		r++;
	return r;
}
void count(char ch[])
{
	int i = 0;
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z')
			letter++;
		else if (ch[i] >= '0' && ch[i] <= '9')
			num++;
		else if (ch[i] == ' ')
			space++;
		else
			other++;

	}
}
int divisor(int n,int m)
{
	int i = 0;
	int min = (n < m ? n : m);
	int max = 1;
	if(n<m)
		for(i=1;i<=min;i++)
		if(n%i==0&&m%i==0)
		if(max<i)
		{
			max = i;
		}
	return max;
}