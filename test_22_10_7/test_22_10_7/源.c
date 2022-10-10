# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
int Count (short int n)
{
	int count = 0;
	while(n)
{
	n = n & (n - 1);
	count++;
}
	return count;
}
void Switch (int n)
{
	/*int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	int i = 0;
	for(i=0;i<32;i++)
	{
		if (i % 2 == 0)
		{
			arr1[i/2] = (n >> i) & 1;
		}
		if (i % 2 == 1)
		{
			arr2[i / 2] = (n >> i) & 1;
		}
	}
	for (i = 15; i >= 0; i--)
	{
		printf("%d%d", arr1[i], arr2[i]);
	}*/
	int i = 0;
	printf("偶数位：");
	for(i=31;i>=0;i-=2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n奇数位：");
	for(i=30;i>=0;i-=2)
	{
		printf("%d", (n >> i) & 1);
	}
}
int main()
{
	/*short int n = 0;
	scanf("%hd", &n);
	int count = Count(n);
	printf("%d", count);
	n = n - 1;
	printf("\n%hd", n);
	return 0;*/
	/*int n = 0;
	scanf("%d", &n);
	Switch(n);*/
	/*int i = 0, s1, s2, s3, s4, s5,aver;
	while(i<2)
	{
		scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
		aver = (s1 + s2 + s3 + s4 + s5) / 5;
		printf("%d\n", aver);
		i++;
	}
	return 0;*/
	/*int i = 1, sum = 0;*/
	/*while(i<=100)
	{
		sum = sum + i;
		i++;
	}*/
	/*do
	{
		sum = sum + i;
		i++;
	} while (i <= 100);
	printf("%d", sum);
	return 0;*/
	/*char c = 0;
	for (; (c = getchar()) != '\n';)
		printf("%c", c);*/
	/*int i = 1;
	double w = 0, s = 0, ave = 0;
	for(i=1;i<10;i++)
	{
		scanf("%lf",& s);
		w = w + s;
		if (w >= 100000.0)
			break;
	}
	ave = w / i;
	printf("%d\n%lf", i, ave);
	return 0;*/
	/*int i = 100;
	for (i = 100; i <= 200; i++)
	{
		if (i % 3 == 0)
			continue;
			printf("%d  ", i);
	}
	return 0;*/
	/*int i = 1, j = 1, n = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			n = i * j;
			printf("%d\t", n);
		}
		printf("\n");
	}*/
	/*double n = 1, pi=0;
	double i = 1, flag = 1;
	int count = 0;
	while(fabs(n)>=1e-8)
	{
		pi = pi + n;
		flag = (-1) * flag;
		i += 2;
		n = flag / i;
		count++;
	}
	printf("%f\n%d", 4*pi,count);
	return 0;*/
	/*int n = 0;
	scanf("%d", &n);
	int i = 2;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (i > sqrt(n))
		printf("%d是素数", n);
	else
		printf("%d不是素数",n);
	return 0;*/
	/*int i = 100, j = 2, m = 0;
	for(i=100;i<=200;i++)
	{
		for (j = 2;j<=sqrt(i);j++)
		{if(i%j==0)
		{
			break;
		}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			m++;
		}
		if (m % 10 == 0)
			printf("\n");
	}
	return 0;*/
//char c = 0;
//while ((c = getchar()) != '\n')
//{
//	if (c >= 65 && c <= 122)
//	{
//		if (c >= 87 && c <= 90 || c >= 119 && c <= 122)
//			c = c - 22;
//		else
//			c = c + 4;
//	}
//	putchar(c);
//}
//return 0;
/*int n = 0, m = 0, max, r = 0;
scanf("%d%d", &n, &m);
max = (n < m ? m : n);
for (; max <= m * n; max++)
{
	if (max % n == 0 && max % m == 0)
		break;
}
printf("最小公倍数是：%d", max);
while (r)
{
	r = n % m;
	if (r != 0) {
		n = m;
		m = r;
	}
}
printf("\n最大公约数是：%d", m);
return 0;*/
/*char c = 0;
int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
while ((c = getchar()) != '\n')
{
	if (c >= 'A' && c <= 'z')
		count1++;
	else if (c == ' ')
		count2++;
	else if (c >= '0' && c <= '9')
		count3++;
	else
		count4++;
}
printf("字母：%d\n空格：%d\n数字：%d\n其他：%d", count1, count2, count3, count4);
return 0;*/
/*int n = 0,a=0;
long  sum = 0,b=0;
scanf("%d%d", &n,&a);
for(int i=1;i<=n;i++)
{
	if(i>=2)
	a = a * 10;
	b = b+ a;
	sum = sum + b;
}
printf("%ld", sum);*/
/*long n = 1, sum = 0;
for(int i=1;i<=20;i++)
{
	for (int j = 1;j<=i;j++)
	{
		n = n * j;
	}
	sum = sum + n;
}
printf("%d", sum);*/
long  j = 0, n1 = 0, n2 = 0;
double n3 = 0,sum=0;
for(j=1;j<=100;j++)
{
	n1 = n1 + j;
}
for(j=1;j<=50;j++)
{
	n2 = n2 + j * j;
}
for(j=1;j<=10;j++)
{
	n3 = n3 + 1.0 / j;
}
sum = n1 + n2 + n3;
printf("%lf", sum);
}