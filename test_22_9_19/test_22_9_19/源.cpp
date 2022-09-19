# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	/*int n = 0, ret = 1, sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);*/
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 ,11};
	int k = 5;
	int i = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz; i++)
	{
		if (arr[i] == k)
		{
			printf("找到了，下标是%d", i);
			break;
		}
	}
	if (i > sz)
		printf("无");*/
	/*int arr[] = { 1,2,3,4,5,6,8,9,11 };
	int k = 9;
	int left = 0;
	int sz = 0;
	int mid = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (k > arr[mid])
			left = mid + 1;
		else if (k < arr[mid])
			right = mid - 1;
		else
		{
			printf("找到了，下标为%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");*/
	/*int left = 0;
	int right = 0;
	char arr1[] = "welcome to bit!!!!!!!!";
	char arr2[] = "######################";
	right = strlen(arr1) - 1;
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		system("cls");
		printf("%s\n", arr2);
		Sleep(1000);
		left++; right--;
	}*/
	char password[20] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("输入正确");
			break;
		}
		else
		{
			if (i < 2)
				printf("密码错误,\n请再输一次");
		}
	}
	if (i >= 3)
		printf("密码错误三次，程序退出");
	return 0;
}