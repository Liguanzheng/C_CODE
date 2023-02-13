# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	/*void Max(int* p1, int* p2);
	int a, b, c;
	int* p1, * p2, * p3;
	p1 = &a, p2 = &b, p3 = &c;
	scanf("%d%d%d", p1, p2, p3);
	Max(p1, p2);
	Max(p1, p3);
	Max(p2, p3);
	printf("%d %d %d", *p1, *p2, *p3);
	return 0;*/
	/*void exchange(int* p1, int* p2, int* p3);
	int a, b, c;
	int* p1 = &a, * p2 = &b, * p3 = &c;
	scanf("%d%d%d", p1, p2, p3);
	exchange(p1, p2, p3);
	printf("%d %d %d", *p1, *p2, *p3);
	return 0;*/
	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = a;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", *(a + i));
	}
	return 0;*/
	/*int a[10] = { 0 };
	int* p = a;
	for (p = a; p < a + 10; p++)
	{
		scanf("%d", p);
	}
	for (p = a; p < a + 10; p++)
	{
		printf("%d ", *p);
	}
	return 0;*/
	/*void reverse(int* p, int n);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	reverse(arr,10);
	int* p = arr;
	for (; p < arr + 10; p++)
	{
		printf("%d ", *p);
	}
	return 0;*/

}
void Max(int* p1, int* p2)
{
	if (*p1 < *p2)
	{
		int t = *p1;
		*p1 = *p2;
		*p2 = t;
	}
}
void exchange(int* p1, int* p2, int* p3)
{
	void swap(int* p1, int* p2);
	if (*p1 < *p2)
		swap(p1, p2);
	if (*p1 < *p3)
		swap(p1, p3);
	if (*p2 < *p3)
		swap(p2, p3);
}
void swap(int* p1,int *p2)
{
	int t = *p1;
	*p1 = *p2;
	*p2 = t;
}
void reverse(int* p,int n)
{
	int* p2 = p + n-1;
	for (; p <= p2; p++, p2--)
	{
		int t = *p;
		*p = *p2;
		*p2 = t;
	}
}