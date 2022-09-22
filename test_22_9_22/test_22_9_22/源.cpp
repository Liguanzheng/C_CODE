# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include<math.h>
# include<string.h>
void print(int n)
{if(n>9)
{
	print(n / 10);
}
printf("%d ", n % 10);
}
int my_strlen(char* str)
{
	int count = 0;
	while(*str!='\0')
{
	str++;
	count++;
}
	return count;
}
int my_strlen1(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen1(str + 1);
	else
		return 0;
}
int main()
{
	/*printf("hehe\n");
	main();*/
	/*int n;
	scanf("%d", &n);
	print(n);*/
	/*char arr[] = "bit";
	int len = my_strlen1(arr);
	printf("%d", len);*/
	/*int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	scanf(" % d % d % d % d % d % d % d % d % d % d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
	int arr[] = { n1,n2,n3,n4,n5,n6,n7,n8,n9,n10 };
	int i = 1;
	int max = n1;
	while (i < 10)
	{
		if (max < arr[i])
			max=arr[i];
		i++;
	}
	printf("最大值是:%d", max);*/
	/*int a = 4564, b = 9, c = 8;
	int max = 0, min = 0, mid = 0;
	int i = 0;
	int n = 0;
	int d = 0;
	if(a>=b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;;
		i = 1;
	}
	if(max>=c)
	{if(c>=min)
	{
		mid=c;
		printf("%d %d %d", max, mid, min);
		d = 1;
	}
	else
	{
		min = c;
	}
	}
	else
	{
		max = c;
		n = 1;
	}
	if((n==0&&i==1)||(n==1&&i==0))
	    mid=a;
	else
		mid=b;
	if(d!=1)
		printf("%d %d %d", max, mid, min);*/
	/*int i = 1;
	int sum = 0;
	for(i=1;i<=100;i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);*/
	/*int n = 0;
	scanf("%d", &n);
	int i = n % 15;
	if (0 == i)
	{
		printf("可");
	}
	else
		printf("不可");*/
	/*int n = 100;
	int d = 2;
	for(n=100;n<=200;n++)
	{
		int m = 0;
		for (d = 2; d <= sqrt(n); d++)
		{
			int i = n % d;
			if (0 == i)
			{
				m = 1;
				break;
			}
		}
		if(0==m)
		printf("%d ", n);
	}*/
	/*int m=4, n=4;
	int com = 0;
	int max;
	int min;
	int Min;
	int i = 0;
	if (m >= n)
	{
		max = m;
		min = n;
	}
	
	else
	{
		max = n;
		min = m;
	}
	Min = min;
	for(min;min>=1;min--)
	{
		i = max % min;
		if ((0 == i)&&((Min%min)==0))
		{
		    com = min;
			break;
		}
	}
	printf("%d",com);*/
//char arr[] = "abcdef";
//int len = strlen(arr);
//int i = 0;
//for(i=0;i<len;i++)
//{
//	printf("%c ", arr[i]);
//}
int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
int sz = sizeof(arr) / sizeof(arr[0]);
int i;
for(i=0;i<sz;i++)
{
	printf("%d ", arr[i]);
}
	return 0;
}