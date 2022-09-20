# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>
int MAX(int x,int y)
{
	int z = 0;
	if (x >= y)
		z = x;
	else
		z = y;
	return z;
}
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
void Swap1(int x,int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* px,int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
 int is_Prime(int* i)
	 {
		 int n = 2;
		 for (n; n < *i; n++)
		 {
			 int a = *i % n;
			 if (a == 0)
			 {
				 return 0;
				 break;
			 }
		 }
		 if (*i == n)
			 return 1;
 }
int main()
{
	/*char arr1[] = "bit";
	char arr2[] = "#############";
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;*/
	/*char arr1[] = "hello world";
	memset(arr1, '*', 6);
	printf("%s", arr1);
	return 0;*/
	/*int a = 10;
	int b = 20;
	int c = 0;
	c = get_max(a, b);
	printf("%d", c);
	return 0;*/
	/*printf("Hello world!");
	return 0;*/
	/*char arr1[] = "***********";
	char arr2[] = "           ";
	int i = 0;
	int left = 0;
	int n = 4;
	for (i = 0; i < 4; i++)
	{
		left = 2 * i;
		n = 4 + 2 * i;
		char arr2[] = "           ";
		do
		{
			arr2[left] = arr1[left];
			left++;
		} while (left <=n);
		printf("%s\n", arr2);
	}*/
	/*int a, b, c,n;
	printf("请输入a=");
	scanf("%d", &a, "\n");
	printf("请输入b=");
	scanf("%d", &b, "\n");
	printf("请输入c=");
	scanf("%d", &c, "\n");
	if (a > b)
		n = a;
	else
		n = b;
	if (n <= c)
		n = c;
	printf("最大值是%d", n);*/
	/*int a= 20;
	int b = 10;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("%d %d", a, b);*/
	/*int a = 20;
	int b = 10;
	printf("a=%d b=%d", a, b);
	Swap2(&a, &b);
	printf("a=%d b=%d", a, b);*/
	/*int n = 100;
	//int i = 2;
	//int a = 0;
	//for (n = 100; n <= 200; n++)
	//{
	//	int m = 0;
	//	for (i = 2; i < n; i++)
	//	{
	//		a = n % i;
	//		if (a == 0)
	//		{
	//			m = 1;//m的作用域为整个大for循环;
	//			
	//			break;
	//		}
	//	}
	//    if (m == 0)
	//		printf("%d ", n);
	//}*/
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_Prime(&i) == 1)
			printf("%d ", i);
	}
		return 0;
	}
	
	
