# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
int main()
{
	/*char c[100] = "asd sd  ";
	char s[] = "abcd edf";
	strcat(c, s);
	printf("%s", c);*/
	/*char c1[100];
	char c2[100];
	gets(c1);
	gets(c2);
	if (strcmp(c1, c2) == 0)
		printf("yes");
	else
		printf("no");*/
	/*char s1[100];
	char s2[100];
	char s3[100];
	scanf("%s%s%s", s1, s2, s3);
	printf("%s\n%s\n%s\n", s1, s2, s3);*/
	/*int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d", arr[i]);
	}*/
	/*int arr[40] = { 1,1 };
	int i = 0;
	for(i=2;i<40;i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for(i = 0; i < 40; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		printf("%d\t", arr[i]);
	}*/
	/*int s[10] = { 0 };
	int i = 0;
	int n = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &s[i]);
	}
	for(n=0;n<9;n++)
	{
		for (i = 0;i<9-n;i++)
		{
			if (s[i] > s[i + 1])
			{
				int t = s[i];
				s[i] = s[i + 1];
				s[i + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", s[i]);
	}*/
	/*char c1[2][3] = { {'a','b','c'},{'d','e','f'}};
	char c2[3][2] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%c", c1[i][j]);
			c2[j][i] = c1[i][j];
		}
		printf("\n");
	}
	printf("\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 2; i++)
		{
			printf("%c", c2[j][i]);
		}
		printf("\n");
	}*/
	/*int arr[3][4] = { 0 };
	int max = arr[0][0];
	int row = 0, col = 0;
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j])
			{
				max = arr[i][j];
				row = i+1;
				col = j+1;
			}
		}
	}
	printf("最大数为%d,行：%d,列:%d", max, row, col);*/
	/*char c[] = "abcdefg";
	puts(c);*/
	/*char c[15] = { 'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.' };
int i = 0;
for (i = 0; i < 15; i++)
	printf("%c", c[i]);*/
	/*char arr[5][5] = { 0};
int left = 0, right = sizeof(arr[0])/sizeof(arr[0][0]) - 1;
int mid = (left + right) / 2;
int i = 0,j=0;
for(i=0;i<5;i++)
{
	if (i <= mid)
	{
		arr[i][mid + i] = arr[i][mid - i] = '*';
	}
	else
		arr[i][left + i - mid] = arr[i][right - i + mid] = '*';
	for (j = 0; j < 5; j++)
	{
		if (arr[i][j] == '*')
			printf("%c", arr[i][j]);
		else
			printf(" ");
	}
	printf("\n");
}*/
	/*char c[] = "China";
printf("%s", c);*/
	/*char c1[5], c2[5], c3[5];
scanf("%s%s%s", c1, c2, c3);
puts(c1);
printf("\n");
puts(c2);
printf("\n");
puts(c3);
printf("\n");
printf("%s%s%s", c1, c2, c3);*/
	/*char str[12] = "";
scanf("%s", str);
puts(str);
printf("%o", str);*/
	/*char c[100] = "";
gets(c);
puts(c);*/
	/*char a[100] = "";
char b[100] = "";
gets(a);
gets(b);
printf("%s", strcat(a, b));*/
	/*char c[5] = "";
gets(c);
char s[5] = "";
scanf("%s", s);
puts(c);
puts(s);*/
	/*char s[5] = "";
gets(s);
puts(s);*/
	/*char c[10] = "";
printf("%s", strcpy(c, "china"));*/
	/*char c1[20], c2[10], c3[10], c4[10];
gets(c1);
gets(c2);
scanf("%s%s", c3, c4);
strcpy(c2, c3);
strcpy(c1, c2);
printf("%s\n%s", strcat(c1, c2), c4);*/
	/*char c1[] = "as";
char c2[] = "asd";
printf("%d", strcmp(c1, c2));
printf("%d", _strupr("wo"));*/
	/*char arr[] = "i am a man.";
int i = 0, f = 0,count=0;
for(i=0;arr[i]!='\0';i++)
{
	if (arr[i] != ' ')
		f = 1;
	else if (arr[i] == ' ')
		f = 0;
	if (f == 0)
		count++;
}
count++;
printf("%d", count);*/
	return 0;
}
