# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	int arr[] = { 1,2,31 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;
}