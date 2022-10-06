# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void Init(int arr[], int sz)
{
	for (int i = 0;i<sz;i++)
	{
		arr[i] = 0;
	}
}
void Printf(int arr[],int sz)
{
	for (int i = 0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void Reverse(int arr[],int sz)
//{
//	for (int n = 1;n<sz;n++)
//	{
//		for (int i = 0;i<sz-n;i++)
//		{
//			int t = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = t;
//		}
//	}
//}
void Reverse (int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<right)
	{
		int t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
		left++;
		right--;
	}
}
//int Count (int n)
//{
//	int count = 0;
//	int i = 0;
//	while (i<32)
//	{
//		if ((n & 1) == 1)
//			count++;
//		n >>= 1;
//		i++;
//	}
//	return count;
//}
int Count(unsigned n)
{
	int count = 0;
	while(n)
	{if(n%2==1)
	{
		count++;
	}
	n >>= 1;
	}
	return count;
}
int main()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr,sz);
	Printf(arr, sz);
	Init(arr,sz );
	Printf(arr,sz);
	return 0;*/
	/*int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		int t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
	Printf(arr1, sz);
	Printf(arr2, sz);
	return 0;*/
	/*int a = 0x11223344;
	char* pa = (char*)&a;
	*pa = 0;
	printf("%x", a);
	return 0;*/
	/*int n1 = 0, n2 = 0;
	scanf("%d%d", &n1, &n2);
	int n = n1 ^ n2;
	int count = 0;
	while (n)
	{
		if (n%2==1)
		{
			count++;
		}
		n = n >> 1;
	}
	printf("%d", count);
	return 0;*/
	int n = 0;
	scanf("%d", &n);
	int count = Count(n);
	printf("%d", count);
	system("pause");
	return 0;
}