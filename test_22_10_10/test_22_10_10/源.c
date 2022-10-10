# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
typedef struct stu
{
	char name[20];
	short age;
	char c;
}stu;
struct t
{
	char ch[20];
	stu s;
	double n;
};
struct Stu
{
	char name[20];
	short age;
	char tele[11];
	char sex[5];
};
void print1(struct Stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}
void print2(struct Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);
}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test ()
//{
//	test1();
//}
int main ()
{
	/*struct t b = { "world",{"王五",18,'o'},3.14 };
	printf("%s", b.ch);
	printf("%c", b.s.c);
	printf("%lf", b.n);*/
	/*struct Stu s = { "张三",18,"13153335823","男"};
	print1(s);
	print2(&s);
	return 0;*/
	/*int i = 0;
	for(i=0;i<100;i++)
	{
		printf("%d ", i);
	}
	system("pause");
	for(i=0;i<100;i++)
	{
		printf("%d ", 10 - i);
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for(i=0;i<12;i++)
	{
		printf("hehe");
		arr[i] = 0;
	}*/
	/*{
		int tmp = 0;
	printf("%d\n", tmp); }
	int arr[10] = { 0 };
	int i = 0;
	for(i=0;i<10;i++)
	{
		arr[i] = i;
	}*/
	/*test();
	return 0;*/
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		ret = 1;
		for (j = 1;j<=i;j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
}