# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <assert.h>
float Max = 0, Min = 0;
int main()
{
	/*int age(int n);
	int n = 5;
	int Age = age(n);
	printf("age=%d\n", Age);
	return 0;*/
	/*int fac(int n);
	int n = 0;
	scanf("%d", &n);
	assert(n > 0);
	printf("%d", fac(n));
	return 0;*/
	/*int n = 0;
	scanf("%d", &n);
	printf("%d", Hanoi(n));
	return 0;*/
	/*void hanoi(int n, char one, char two, char three);
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;*/
	/*void judge(int arr[], int n);
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	judge(arr,10);
	return 0;*/
	/*float ave(float score[], int n);
	float score[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	float average = ave(score,10);
	printf("%f", average);
	return 0;*/
	/*float ave(float score[], int n);
	float score1 [5] = {98.5,97,91.5,60,55};
	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
	float ave1 = ave(score1,5);
	float ave2 = ave(score2,10);
	printf("%f\t%f\n", ave1, ave2);
	return 0;*/
	//int arr[10] = { 9,8,7,4,5,6,1,2,3,0 };
	/*int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;*/
	/*void sort(int arr[], int n);
	sort(arr,10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;*/
	/*int find(int arr[][4]);
	int arr[3][4] = { 9,8,7,4,5,6,1,2,3,11,12,13 };
	int max = find(arr);
	printf("%d\n", max);
	return 0;*/
	/*float Ave(float arr[], int n);
	float arr[10] = { 89,95,87.5,100,67.5,97,59,84,73,90 };
	float aver = Ave(arr, 10);
	printf("%f\n%f,%f\n", aver, Max, Min);
	return 0;*/
	/*int Fac(int n);
	int n = 0;
	for (n = 1; n <= 5; n++)
	{
		printf("%d\t", Fac(n));
	}
	return 0;*/
	/*int a, b;
	int* p1=&a, * p2=&b;
	scanf("%d%d", p1, p2);
	if (*p1 < *p2)
	{
		p1 = &b;
		p2 = &a;
	}
	printf("%d,%d", *p1, *p2);
	return 0;*/
	/*void max(int* p1, int* p2);
	int a, b;
	int* p1 = &a, * p2 = &b;
	scanf("%d%d", p1, p2);
	max(p1, p2);
	printf("%d\t%d", *p1, *p2);
	return 0;*/
	
}
int age(int n)
{
	if (n > 1)
		return 2 + age(n - 1);
	else
		return 10;
}
int fac(int n)
{
	int c;
	if (n > 1)
		c = n * fac(n - 1);
	else
		c = 1;
	return c;
}
int Hanoi(int n)
{
	int c;
	if (n > 1)
		c = 2 * Hanoi(n - 1) + 1;
	else
		c = 1;
	return c;
}
void hanoi(int n, char one, char two, char three)
{
	void move(char one, char three);
	if (n > 1)
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
	else
		move(one, three);
}
void move(char one, char three)
{
	printf("%c-->%c\n", one, three);
}
void judge(int arr[], int n)
{
	int i = 0;
	int max = arr[0], col = 0;
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			col = i;
		}
	}
	printf("max=%d,col=%d\n", max, col + 1);
}
float ave(float score[], int n)
{
	float sum = 0, average = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		sum += score[i];
	}
	average = sum / n;
	return average;
}
void sort(int arr[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		t = arr[k];
		arr[k] = arr[i];
		arr[i] = t;
	}
}
int find(int arr[][4])
{
	int max, i, j;
	max = arr[0][0];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	return max;
}
float Ave(float arr[], int n)
{
	int i = 0;
	Max = Min = arr[0];
	float sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += arr[i];
		if (Max < arr[i])
			Max = arr[i];
		else if (Min > arr[i])
			Min = arr[i];
	}
	return sum / n;
}
int Fac(int n)
{
	static int c = 1;
	return c = c * n;
}
void max(int* p1, int* p2)
{
	if (*p1 < *p2)
	{
		int t = *p1;
		*p1 = *p2;
		*p2 = t;
	}
}
