# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int func(int a)
{
	int b = 0;
	switch (a)
	{
	case 1:b = 30;
	case 2:b = 20;
	case 3:b = 16;
	default:b = 0;
	}
	return b;
}
int main ()
{
	/*int a = 2, i;
	for(i=0;i<5;i++)
	{
		printf("%d  ", sum(a));
	}
	return 0;*/
	/*printf("%d", func(1));*/
	/*int x = 3;
	int y = 3;
	switch(x%2)
	{
	case 1:
	{switch (y)
	{
	case 1:printf("first");
	case 2:printf("second");
		break;
	default:printf("hello");
		
	}
	
     case 2:printf("third"); }
	}
	return 0;*/
	/*int a, b, c, max,mid,min,i;
	scanf("%d%d%d", &a, &b, &c);
	max = (a >= b ? a : b);
	if (max == a)
		i = 1;
	else
		i = 0;
	if (max >= c)
	{
		if (i == 1)
		{
			if (c >= b)
			{
				mid = c;
				min = b;
			}
			else
			{
				mid = b;
				min = c;
			}
		}
		else
			if (c >= a)
			{
				mid = c;
				min = a;
			}
			else
			{
				mid = a;
				min = c;
			}
	}
	else
	{
		max = c;
		if(i==1)
		{
			mid = a;
			min = b;
		}
		else
		{
			mid = b;
			min = a;
		}
	}
	printf("%d %d %d", max, mid, min);
	return 0;*/
	/*int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a<=b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if(a<=c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if(b<=c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);*/
	/*int n = 0;
	for(n=3;n<=100;n=n+3)
	{
		printf("%d ", n);
	}*/
    /*int i;
//for (i = 1; i <= 100; i++)
//{
//	if (0 == i % 3)
//		printf("%d ", i);
//}*/
    //int a, b,i,min,c;
//scanf("%d%d", &a, &b);
//min = (a <= b ? a : b);
//for (i = 1; i <= min; i++)
//{
//	if ((a % i==0) && (b % i==0))
//		c = i;
//}
//printf("%d", c);
//	return 0;
int a, b, max, min,r;
scanf("%d%d", &a, &b);
//max = (a >= b ? a : b);
//min = (a < b ? a : b);
//while(r=max%min)
//{
//	max = min;
//	min = r;
//}
//printf("%d", min);
while (r = a % b)
{
	a= b;
	b = r;
}
printf("%d", b);
}