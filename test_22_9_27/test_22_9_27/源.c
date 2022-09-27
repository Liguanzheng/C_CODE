# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
/*double SQRT(int x)
{
	int y;
	if (x == y * y)
		return y;
}*/
int main()
{
	//int year = 0;
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	/*if ((year % 4 == 0) && (year % 100 != 0))
	//	{
	//		count++;
	//		printf("%d  ", year);
	//	}
	//	else if (year % 400 == 0)
	//	{
	//		count++;
	//		printf("%d  ", year);
	//	}*/
	//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//	{
	//		count++;
	//		printf("%d  ", year);
	//	}
	//}
	//printf("\n一共有 % d个闰年", count);
	/*int n = 100, i = 2, count = 0;
	for(n=101;n<=200;n+=2)
	{
		for (i = 2;i<=sqrt(n);i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}
		if (i > sqrt(n))
		{
			count++;
			printf("%d  ", n);
		}
	}
	printf("\n共有%d个素数", count);*/
	//int a=0, b=0,n;
	//n = a*10 + b;
	//int count =0 ;
	//for(a=0;a<=9;a++)
	//{
	//	count++;/*for(b=0;b<=9;b++)
	//	{if(b==9)
	//	{
	//		count++;
	//	}
	//	}*/
	//	if(a==9)
	//	{
	//		count+=10;
	//	}
	//}
	//printf("%d  ", count);
	/*int n = 9, count = 0;
	for (n = 9; n <= 100; n ++)
	{
		if (n % 10 == 9)
			count++;
		if (n / 10 == 9)
			count++;
	}
	printf("%d ", count);*/
	//int n = 1.0;double  sum = 0;
	//int flag = 1;
	//for(n=1.0;n<=100.0;n++)
	//{
	//	double r = flag*(1.0 / n);
	//	/*if (n % 2 == 0)
	//		r = r * (-1);*/
	//	sum = sum + r;
	//	flag = flag * (-1);
	//}
	//printf("%f  ", sum);
	/*int n = 0, i = 0;
	int max;
	scanf("%d", &max);
	for(i=0;i<10;i++)
	{
		scanf("%d", &n);
		max = (max >= n ? max : n);
	}
	printf("\n最大值是:%d", max);*/
	int arr[] = { -1,-2,-3,-8,-5,-6,-7,-8,-9,-10 };
	int i = 0;
	int max = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(arr[i]>max)
	{
		max = arr[i];
	}
	}
	printf("%d", max);
	return 0;
}