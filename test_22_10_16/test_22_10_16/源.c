# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>
# define SUM 100000
int judge(int arr[])
{
	int i = 0;
	while (1)
	{
		if (arr[i] > arr[i + 1])
			return 1;
		else if
			(arr[i] < arr[i + 1])
			return 0;
		else
			i++;
	}
}
int main()
{
	/*/*char c1[10] = "";
	//char c2[10] = "";
	//char c3[10] = "";
	//gets(c1);
	//gets(c2);
	//gets(c3);
	//if (strcmp(c2, c1) > 0)
	//	strcpy(c1, c2);
	//if (strcmp(c3, c1) > 0)
	//	strcpy(c1, c3);
	//printf("%s", c1);*/
	/*char c[3][10] = { 0 };
	char string[20] = "";
	int i = 0;
	for (i = 0; i < 3; i++)
		gets(c[i]);
	if (strcmp(c[0] , c[1])>0)
		strcpy(string, c[0]);
	else
		strcpy(string, c[1]);
	if (strcmp(c[2] ,string)>0)
		strcpy(string, c[2]);
	printf("%s", string);*/
	/*char c[6] = "china";
	puts(c);
	char c1 = 0;
	c1=getchar();
	putchar(c1);*/
	/*int arr[100] = { 0 };
	int i = 0;
	for(i=0;i<100;i++)
	{
		arr[i] = i + 1;
	}
	arr[0] = 0;
	int j = 0;
	for(j=2;j<99;j++)
	{
		for (i = j-1; i < 99; i++)
		{
			if (arr[i + 1] % j == 0)
				arr[i + 1] = 0;
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (arr[i] != 0)
			printf("%d\t", arr[i]);
	}*/
	/*int arr[10] = { 0 };
	int i = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	int flag = 0;
	int j = 0;
	for (i = 0; i < 9; i++)
	{
		int min = arr[i];
		for (j = i + 1; j < 10; j++)
		{
			if (min > arr[j])
			{
				flag = j;
				min = arr[j];
			}
		}
		arr[flag] = arr[i];
		arr[i] = min;
		printf("%d\t", arr[i]);
	}
	printf("%d\t", arr[i]);*/
	/*int arr[3][3] = { 0 };
	int i = 0, j = 0;
	int sum = 0;
	int right = sizeof(arr[0]) / sizeof(arr[0][0])-1;
	int left = 0;
	int mid = (left + right) / 2;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	for (i = 0; i < 3; i++)
		sum = sum + arr[i][i]+arr[right-i][i];
	sum = sum - arr[mid][mid];
	printf("%d", sum);*/
	/*int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &arr[i]);
	switch (judge(arr))
	{
	case 0:
	for (; i >= 1; i--)
	{
		if (arr[i] < arr[i - 1])
		{
			int t = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = t;
		}
	}
	break;
	case 1:for (; i >= 1; i--)
	{
		if (arr[i] > arr[i - 1])
		{
			int t = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = t;
		}
	}
		  break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t", arr[i]);
	}*/
	/*int arr[10][10] = { {1},{1,1} };
	int i = 0, j = 0;
	for(i=2;i<10;i++)
	{
		arr[i][0] = arr[i][i] = 1;
		for(j=1;j<i;j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(arr[i][j]!=0)
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}*/
	/*int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = (left + right) / 2;
	while (left < right)
	{
		int t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
		left++;
		right--;
	}
	for (i = 0; i < 5; i++)
		printf("%d\t", arr[i]);*/
	/*float i, amount, aver, total=0;
	for (i = 0; i < 1000; i++)
	{
		printf("输入:");
		scanf("%f", &amount);
		total = total + amount;
		if (total >= SUM)break;
	}
	aver = total / i;
	printf("%d\n%f\n", (total), aver);*/
	/*int n = 0;
	float* p = (float*)&n;
	*p = 9.0;
	float m = 9.0;
	printf("n=%f\nm=%f\n", n, m);*/
	/*float i = 0, sum = 0, n = 10;
	for (i = 0; i < n; i++)
		sum = sum + i;
	printf("%f", sum);*/
	/*int arr[10][10] = { 0 };
	int n = 0;
	scnaf("%d", &n);
	int i = 0, j = 0;
	for(i=0;i<n;i++)*/
	/*int arr[15][15] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int mid = n / 2;
	int i = 0,j=0;
	int row = 0, col = mid;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			arr[i][j] = 16 * 16;
	arr[0][mid] = 1;
	for (i = 2; i <= n * n; i++)
	{
		if(row==0&&arr[n-1][col+1]==16*16)
		{
			row = n - 1;
			col++;
			arr[row][col] = i;
		}
		else if(col==n-1&&arr[row-1][0]==16*16)
		{
			row--;
			col = 0;
			arr[row][col] = i;
		}
		else if (arr[row - 1][col + 1] == 16*16)
		{
			row--;
			col++;
			arr[row ][col] = i;
		}
		else
		{
			row++;
			arr[row][col] = i;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j] != 0)
				printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}*/
	/*int arr[4][4]={0};
	int i = 0, j = 0,k=0;
	for(i=0;i<4;i++)
	{
		for (j = 0; j < 4; j++)
			scanf("%d", &arr[i][j]);
	}
	for (i = 0; i < 4; i++)
	{
		int flag = 0;
		int max = arr[i][0];
		int col = 0;
		for (j = 0; j < 4; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				col = j;
			}
		}
		for (k = 0; k < 4; k++)
		{
			if (max > arr[k][col])
				break;
			flag = 1;
		}
		if (flag == 1)
			printf("%d\t", max);
	}*/
	int arr[15] = {0};
	int i = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int n = 0;
	printf("输入15个数\n");
	for(i=0;i<15;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("输入要找的数：\n");
	scanf("%d", &n);
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > n)
		{
			right = mid;
			right--;
		}
		else if (arr[mid] < n)
		{
			left = mid;
			left++;
		}
		else if (arr[mid] == n)
		{
			printf("找到了，是第%d个元素", mid + 1);
			break;
		}
		if (left > right)
			printf("无此数");
	}
	return 0; 
}