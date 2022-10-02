# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	/*int a = 10;
	short c = 0;
	printf("%d\n", sizeof(c = a + 5));
	printf("%d\n", c);*/
	/*int a = 0;
	printf("%d\n", ~a);*/
	/*int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a);
	a = a & (~(1 << 2));
	printf("%d\n", a);*/
	/*int a = 10;
	printf("%d\n", ++a);
	printf("%d\n", a++);*/
	/*int a = (int)3.14;
	printf("%d", a);*/
	/*int a = 0, b = 0;
	b = ((a > 5) ? 3 : (-3));
	printf("%d\n", b);*/
	/*struct Stu s1 = { "云",18,"201910" };
	printf("%s\n", s1.name);
	struct Stu* ps = &s1;
	(*ps).age=81;
	printf("%d\n", ps->age);*/
	/*char a = 128;
	printf("%d", a);*/
	/*char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("%d\n", a);
	if (b == 0xb600)
		printf("%d\n", b);
	if (c == 0xb6000000)
		printf("c");*/
		/*char c = 0;
		printf("%d\n", sizeof(c));
		printf("%d\n", sizeof(+c));
		printf("%d\n", sizeof(!c));*/
		/*int i = 1;
		int a = (++i) + (++i) + (++i);
		printf("%d,%d", a,i);*/
		//int a = 0x11223344;
		////int* pa = &a;
		//char* pc = &a;
		////*pa = 0;
		//*pc = 0;
		////printf("%d\n", sizeof(int*));
		////printf("%p\n%p\n", pa, pc);
		/*int a = 0x11223344;
		int* pa = &a;
		char* pc = &a;
		printf("%p\n", pa);
		printf("%p\n", pa+1);
		printf("%p\n", pc);
		printf("%p\n", pc+1);*/
		/*int arr[10] = { 0 };
		char* p = arr;
		int i = 0;
		for(i=0;i<10;i++)
		{
			*(p + i) = 1;
		}*/
		/*int a = 3, b = 4, c = 5;
		int x = 1, y = 1;
		printf("%d\n", a + b > c && b == c);
		printf("%d\n",a||b+c&&b-c);
		printf("%d\n", !(a>b)&&!c||1);
		printf("%d\n", !(x=a)&&(y=b)&&0);
		printf("%d\n", !(a+b)+c-1&&b+c/2);*/
		/*int a = 0, b = 0, c = 0;
		scanf("%d%d", &a, &b);
		a = (a > b ? a : b);
		scanf("%d", &c);
		a = (a > c ? a : c);
		printf("%d", a);*/
		/*int input = 0;
		int i = 0;
		do
		{
			scanf("%d", &input);
			if(input<=0||input>=1000)
			{
				printf("输入错误，请重新输入:");
				i = 1;
				continue;
			}
			input = sqrt(input);
			break;
		}
		while (i);
		printf("\n%d", input);*/
		/*float x, y;
		scanf("%f", &x);
		if (x < 1)
		{
			y = x;
		}
		else
		{
			if (x >= 1 && x < 10)
			{
				y = 2.0 * x - 1;
			}
			else
				y = 3.0 * x - 11;
		}
		printf("%f", y);*/
		//char c = 0;
		//int input = 0;
		//scanf("%d", &input);
		//if (input >= 90)
		//c = 'A';
		//else
		//{
		//	if (input >= 80 && input <= 89)
		//		c = 'B';
		//	else
		//	{
		//		if (input >= 70 && input <= 79)
		//			c = 'C';
		//		else {
		//			if (input >= 60 && input <= 69)
		//				c = 'D';
		//			else
		//				c = 'E';
		//		}
		//	}
		//}
		//printf("%c", c);
		//long int a = 0;
		//int i = 0;
		//int count = 0;
		//scanf("%ld", &a);
		//for(count=0;a;count++)
		//{
		//	i = a % 10;
		//	printf("%d", i);
		//	a = a / 10;
		//}
		//printf("\n%d", count);
		//	return 0;
		//float i = 0;
		//float p = 0;
		//scanf("%f", &i);
		//if (i <= 100000)
		//p = i * 0.1;
		//else
		//{
		//	if (i > 100000 && i <= 200000)
		//		p = (i - 100000) * 0.075 + 100000 * 0.1;
		//	else
		//	{
		//		if (i > 200000 && i <= 400000)
		//			p = (i - 200000) * 0.05 + 100000 * 0.175;
		//		else
		//		{
		//			if (i > 400000 && i <= 600000)
		//				p = (i - 400000) * 0.03 + 100000 * 0.175 + 200000 * 0.05;
		//			else
		//			{
		//				if (i > 600000 && i <= 1000000)
		//					p = (i - 600000) * 0.015 + 100000 * 0.175 + 200000 * 0.08;
		//				else
		//					p = (i - 1000000) * 0.01 + 400000 * 0.015 + 100000 * 0.175 + 200000 * 0.08;
		//			}
		//		}
		//	}
		//}
		//printf("%f\n", p);
		//int r = (i-1) / 100000;
		//switch(r)
		//{case 0:
		//	p = i * 0.1;
		//	break;
		//case 1:
		//	p = (i - 100000) * 0.075 + 100000 * 0.1;
		//	break;
		//case 2:
		//case 3:
		//	p = (i - 200000) * 0.05 + 100000 * 0.175;
		//	break;
		//case 4:
		//case 5:
		//	p = (i - 400000) * 0.03 + 100000 * 0.175 + 200000 * 0.05;
		//	break;
		//case 6:
		//case 7:
		//case 8:
		//case 9:
		//	p = (i - 600000) * 0.015 + 100000 * 0.175 + 200000 * 0.08;
		//	break;
		//default:
		//	p = (i - 1000000) * 0.01 + 400000 * 0.015 + 100000 * 0.175 + 200000 * 0.08;
		//}
		//printf("%f", p);
		//int a = 0, b = 0, c = 0, d = 0,min=0,mid=0,max=0;
		//scanf("%d%d%d%d", &a, &b, &c, &d);
		//min= ((a < b) ? a : b);
		//min= ((min < c) ? min: c);
		//min = ((min < d) ? min : d);
//int n = 5;
//int arr[5]={0};
//	int i = 0;
//	int r = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", (arr + i));
//	}
//	for (r=0; r<n; r++)
//	{
//		for (i = n-1; i >r; i--)
//		{
//			if (arr[i] < arr[i - 1])
//			{
//				int t = arr[i];
//				arr[i] = arr[i - 1];
//				arr[i - 1] = t;
//			}
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
int x, y;
scanf("%d%d", &x,& y);
if (((x - 2) * (x - 2) + (y - 2) * (y - 2) <= 1)|| ((x + 2) * (x + 2) + (y - 2) * (y - 2) <= 1)|| ((x + 2) * (x + 2) + (y + 2) * (y + 2) <= 1)|| ((x - 2) * (x - 2) + (y + 2) * (y + 2) <= 1))
printf("高度为1");
else
printf("高度为0");
}
//# include <stdio.h>
//int main ()
//{
//	int x, y;
//	printf("enter x:");
//	scanf("%d", &x);
//	y = -1;
//	if (x != 0)
//		if (x > 0)
//			y = 1;
//		else
//			y = 0;
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}
//# include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("enter x:");
//	scanf("%d", &x);
//	y = 0;
//	if (x >= 0)
//		if (x > 0)
//			y = 1;
//		else
//			y = -1;
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}