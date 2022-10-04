# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <malloc.h>
# include <string.h>
int* test()
{
	static int a = 0;
	return &a;
}
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while(*end != '\0')
	{
		end++ ;
	}
	return end - start;
}
 int ADD(int* w,int n,int W,int i,int* sum,int* count)
{
	 sum = sum + w[i];
		if(sum<W)
		{
			sum = sum + ADD(* w,  n,  W,  i+1,sum,count);
		}
		else if(sum==W)
		{
			count++;
			sum = 0;
			sum = sum + ADD(*w, n, W, i + 1, sum, count);
		}
		else if(sum>W)
		{
			if(i==n-1)
			{
				return count = count + 1;
			}
			sum = sum - w[i];
			sum = sum + ADD(*w, n, W, i + 1, sum, count);
		}
	
}
int main()
{
	/*int* p;
	*p = 20;
	printf("%d", *p);
	return 0;*/
	/*int* p = NULL;
	printf("%p\n", p);
	p= test();
	printf("%p\n", p);*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for(i=0;i<sz;i++)
	{
		*p = arr[i];
		printf("%d  ", *p);
	}
	p = &arr[9];
	printf("\n");
	for(i=9;i>=0;i-=2)
	{
		*p = arr[i];
		printf("%d  ", *p);
	}
	return 0;*/
	/*char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d ", &arr[9] - &arr[5]);
	printf("%d ", &arr[0] - &ch[0]);*/
	/*char ch[] = "bit";
	int len = my_strlen(ch);
	printf("%d ", len);*/
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 0;
		printf("%p======%p\n%d\n", p + i, &arr[i], *(p + i));
		
	}
	return 0;*/
	/*int a = 0;
	int* pa = &a;
	int** ppa = &pa;
	**ppa = 20;
	printf("%d\n%d\n%p", a,*pa,pa);*/
	/*{int a = 100; }
	printf("%d ", a);*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for(int i=0;i<10;i++)
	{
		for (int n = 0;n<10-i;n++)
		{
			if (n == 9 - i)
				break;
				
			if(arr[n]<arr[n+1])
		{
			int t = arr[n];
			arr[n] = arr[n + 1];
			arr[n + 1] = t;
		}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*int r = 0;
	do
	{
		scanf("%d", &r);
		if (r == 1)
			printf("I like you");
		else if (r == 0)
			printf("He he");
		else
			printf("请重新输入");
	} while (r != 0 && r != 1);
	return 0;*/
	/*int W, n;
	scanf("%d%d", &n, &W);
	int w[] = {0};
	int i = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d", &w[i]);
		printf("%d", w[i]);
	}*/
	/*int* arr;
	int size = 0;
	scanf("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);
	memset(arr, 0x00, sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		printf("%d", arr[i]);
	}
	free(arr);*/
int n, W;
scanf("%d%d", &n, &W);
int* w;
w = (int*)malloc(sizeof(int*) * n);
if(NULL==w)
{
	printf("未成功");
	return 0;
}
memset(w, 0x00, sizeof(int*)* n);
int i = 0;
for(i=0;i<n;i++)
{
	scanf("%d", &w[i]);
}
for(i=0;i<n-1;i++)
{
	for (int q = 0;q<(n-1-i);q++)
	{
		if (w[q] < w[q + 1])
		{
			int t = w[q];
			w[q] = w[q + 1];
			w[q + 1] = t;
		}
	}
}
int sum = 0, count = 0;
for(i=0;i<n;i++)
{
	sum = sum + w[i];
	int t = w[i];
	if (sum == W)
	{
		count++;
		sum = 0;
	}
	else if (sum > W)
	{
		sum = sum - t;
		i = i + 1;
		for (int q = i; q < n; q++)
		{
			int t = sum;
			sum = sum + w[q];
			if (sum == W)
			{
				count++;
				sum = 0;
				w[q] = 0;
				break;
			}
			else if (sum > W)
			{
				if (q == n - 1)
				{
					count++;
					sum = 0;
					break;
				}
				sum = sum - w[q];

				continue;
			}
			else if(q==n-1)
			{
				count++;
				sum = 0;
				break;
			}
			else if(sum>=t)
			{
				w[q] = 0;
			}
		}
		i = i - 2;
	}
	else if(i==n-1)
	{
		count++;
	}
} 
printf("\ncount=%d", count);
	return 0;
}