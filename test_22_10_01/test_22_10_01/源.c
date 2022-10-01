# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
int main()
{
	/*int a = 0;
	a = sizeof(a);
	printf("%d", a);
	return 0;*/
	/*int a = -50;
	int b = a << -2;
	printf("%d", b);
	return 0;*/
	/*int a = 3, b = 8;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	return 0;*/
	/*int a;
	scanf("%d", &a);
	int i = 0;
	/*int r = 0, i = 0;
	if (fabs(a) >= 0)
	{
		while (fabs(a) > 0)
		{
			r = (int)fabs(a) % 2;
			a = fabs(a) / 2;
			if (r != 0)
				i++;
		}
		printf("%d", i);
		return 0;
	}
	while(a!=0)
	{
		if(a<0)
	{
		i++;
	}
	a = a << 1;
	}
	printf("%d", i);
	return 0;*/
	/*int a = 0,i=0,r=0,n=0;
	scanf("%d", &a);
	for(n=0;n<32;n++)
	{
		r = a & 1;
		if(r==1)
		{
			i++;
		}
		a = a >> 1;
	}
	printf("%d", i);*/
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d",a);*/
	int a = 10;
	char c = 4;
	char* p = c;
	int arr[10] = {0};
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(char [10]));
}