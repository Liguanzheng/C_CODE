# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
void Ascend(int* arr,int sz)
{
	int i = 0;
	for(i=0;i<sz-1;i++)
	{
		int flag = 1;
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
		{
			int tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j + 1] = tmp;
			flag = 0;
		}
		}
		if(1==flag)
		{
			break;
		}
	}
}
int main ()
{
	/*int arr[3][4] = { {1,2,3,},{4,5} };
	int i;
	for(i=0;i<3;i++)
	{
		int j = 0;
		for(j=0;j<4;j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
		}
		printf("\n");
	}*/
	/*float a = 1.0;
	printf("%4.1f", a/3);
	return 0;*/
	/*printf("\001%o", -10);*/
	/*float a, b, c;
	scanf("%f,%f,%f", & a, &b, &c);
	printf("%f%f%f", a, b, c);
	return 0;*/
	/*char a = 'B'; char b = 'O'; char c = 'Y';*/
	/*int a = 66, b = 79, c = 89;*/
	/*char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');*/
	/*putchar(getchar());*/
	/*putchar(getchar());
	putchar(getchar());
	putchar(getchar());*/
	/*putchar(getchar() + 32);*/
	int arr[] = { 10,8,7,6,5,8,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Ascend(arr,sz);
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}