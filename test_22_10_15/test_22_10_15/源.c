# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
void test(int arr[])
{
	printf("%d", sizeof(arr) / sizeof(arr[0]));
}
void print1(int arr[3][5])
{
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		for (j = 0;j<5;j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5])
{
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		for (j = 0;j<5;j++)
		{
			printf("%d\t", ( * (p + i))[j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", *(*(p + i)+j));
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}
}
void test1(int* p)
{
	*p = 20;
}
int Add(int x,int y)
{
	return x + y;
}
void print(char* str)
{
	printf("%s", str);
}
int add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x -y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	/*int arr[10] = { 0 };
	test(arr);
	printf("\n%d", sizeof(arr) / sizeof(arr[0]));*/
	/*char ch[] = "abcdef";
	char* p = ch;
	printf("%s\n", ch);
	printf("%s\n", p);*/
	/*const char* p = "abcdefghi";
	printf("%c\n", *p);
	printf("%s\n", p);
	*p = 'w';
	printf("%s\n", p);*/
	/*char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	printf("%p\n%p\n%p\n%p\n", p1, p2, &p1, &p2);
	if (p1 == p2)
		printf("hehe\n");
	else
		printf("haha\n");*/
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	int arr3[] = { 11,12,13,14,15 };
	int* parr[] = {arr1,arr2,arr3};
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		for (j = 0;j<5;j++)
		{
			printf("%d  ", *(parr[i] + j));
		}
		printf("\n");
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;
	int i = 0;
	int* p = arr;
	for(i=0;i<10;i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ", *(*pa + i));
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ", ( * pa)[i]);
	}*/
	/*int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	print1(arr);
	print2(arr);*/
	/*int arr[5] = { 1,2,3,4,5 };
	int i = 0;
	for(i=0;i<5;i++)
	{
		printf("%d ", *(arr + i));
	}*/
	/*int a = 10;
	int* p = &a;
	test1(&a);
	printf("%d", a);*/
	/*int(*p)(int, int) = Add;
	printf("%d", (*p)(2, 3));*/
	/*void(*c)(char*) = print;
	( c)("hello");
	typedef void(*fun)(int);
	void(*signal(int, void(*)(int)))(int);
	fun(signal(int, fun));*/
	/*int i = 0;
	int (*arr[4])(int,int) = {add,sub,mul,div};
	for(i=0;i<4;i++)
	{
		printf("%d ", arr[i](2, 3));
	}*/
	char*(*pf)(char*, const char*);
	char*(*arr[4])(char*, const char*);
	return 0;
}