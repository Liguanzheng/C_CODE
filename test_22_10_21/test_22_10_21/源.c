# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int count = 0;
int Max = 0;
int main()
{
	/*void print();
	print();
	return 0;*/
	/*int max_(a, b);
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int max = max_(a, b);
	printf("%d\n", max);*/
	/*int max_(x, y);
	float a = 0, b = 0;
	scanf("%f%f", &a, &b);
	int max = max_(a, b);
	printf("%d\n", max);*/
	/*int Add(int x, int y);
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int sum = a + b;
	printf("%d\n", sum);*/
	/*int find(int arr[]);
	int arr[4];
	int i = 0;
	for(i=0;i<4;i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = find(arr,sz);
	printf("%d\n", max);*/
	/*int max2(int x, int y);
	int max4(int x, int y, int a, int c);
	int x = 0, y = 0, a = 0, b = 0;
	scanf("%d%d%d%d", &x, &y, &a, &b);
	int m = max4(x,y,a,b);
	printf("%d\n", m);*/
	/*void print_star();
	void print_message();
	print_star();
	print_message();
	print_star();
	return 0;*/
	/*float Sum(float x, float y);
	float a = 5.31, b = 8.2;
	printf("%f\n", Sum(a, b));*/
	/*int max4(int a, int b, int c, int d);
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int max = max4(a, b, c, d);
	printf("%d\n", max);*/
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;
		printf("%d\n", i);
	}
}
void print()
{
	printf("**************\n");
	printf("How do you do!\n");
	printf("**************\n");
}
int max_(float a,float b)
{
	return (a > b ? a : b);
}
int Add(int x,int y)
{
	return (x + y);
}
int find(int arr[],int sz)
{
	if (count==sz-1)
		return Max;
	count++;
	if (Max<arr[0])
		Max= arr[0];
	find(&(arr[0])+ 1,sz);
}
int max4(int x, int y, int a, int b)
{
	int max2(int x, int y);
	return (max2(max2(max2(x, y), a), b));
}
int max2(int x,int y)
{
	return (x > y ? x : y);
}
void print_star()
{
	printf("**************\n");
}
void print_message()
{
	printf("How do you do?\n");
}
float Sum(float x,float y)
{
	float z = x + y;
	return (int)z;
}