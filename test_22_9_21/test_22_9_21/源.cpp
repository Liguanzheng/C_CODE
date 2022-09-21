# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include "add.h"
int Judge_leap_year(int* year)
{
	int i = 0;
	i = *year % 4;
	if (i == 0)
	{
		i = *year % 100;
		if (i != 0)
			return 1;
		else
		{
			i = *year % 400;
			if (i == 0)
				return 1;
			else
				return 0;
		}
	}
	else
		return 0;
}
int Search_number(int arr[], int x,int right1)
{
	int left = 0;
	int right = right1;
	int mid=0;
	while (left <= right)
	{
		mid = (left + right)/2;
		if (arr[mid] > x)
		{
			right = mid;
			right--;
		}
		else if (arr[mid] < x)
		{
			left = mid;
			left++;
		}
		else if (arr[mid] = x)
		{
			return mid;
		}
	}
	if (left > right)
		return 0;
}
void Add(int* n)
{
	(*n)++;
}
/*int main()
//{
//	int year = 2000;
//	int i = 0;
//	//printf("判断闰年，请输入年份：");
//	//scanf("%d", &year);
//	for (year = 2000; year <= 2500; year++)
//	{
//		if ((Judge_leap_year(&year)) == 1)
//		{
//			printf("%d", year);
//			printf("是闰年\n");
//		}
//
//	}*/
int main()
{
	/*int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int right1 = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = Search_number(arr, 11, right1);
	if (ret == 0)
		printf("数组中无此数");
	else
		printf("找到了，下标是：%d",ret);*/
	/*int n = 0;
	Add(&n);
	printf("%d\n", n);
	Add(&n);
	printf("%d\n", n);
	Add(&n);
	printf("%d\n", n);*/
	
	//printf("%d", strlen("abc"));
	/*printf("%d", printf("%d", printf("%d", 43)));*/
	int a = 20;
	int b = 30;
	int sum = 0;
	sum = Add(a, b);
	printf("%d", sum);
 return 0;
}