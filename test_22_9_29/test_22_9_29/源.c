# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	/*int n = 1, p = 0,i=1;
	for(n=1;n<=9;n++)
	{
		for (i = 1;i<=n;i++)
		{
			p = i * n;
			printf("%d*%d=%d\t",i,n ,p);
		}
		printf("\n");
	}*/
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int x, left, right,mid;
	left = 0, right = sizeof(arr) / sizeof(arr[0])-1;
	scanf("%d", &x);
	while(left<=right)
	{
		mid = (left + right) / 2;
		if (x > arr[mid])
		{
			left = mid;
			left++;
		}
		else if (x < arr[mid])
		{
			right = mid;
			right--;
		}
		else
			break;
	}
	if (left <= right)
		printf("\n%d", mid);
	else
		printf("\n�Ҳ���");*/
	int n, x;
	x = 5;
	int i = 1;
	while (i==1)
	{
		char flag='\0';
		printf("��ʼ��Ϸ��Y/N:");
		scanf("%c", &flag);
		if (flag == 'Y')
		{

			printf("����������");
			scanf("%d", &n);
			while (n != x)
			{
				if (n > x)
				{
					printf("\n�´���");
				}
				else
				{
					printf("\n��С��");
				}
				printf("\n�ٲ�һ�Σ�");
				scanf("%d", &n);
			}
			if (n == x)
			{
				printf("\n�¶���");
			}
		}
		else
		{
			printf("����");
			break;
		}
		getchar();
	}
	
	/*char c1, c2, c3, c4, c5;
	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
	c1 = c1 + 4;
	c2 = c2 + 4;
	c3 = c3 + 4;
	c4 = c4 + 4;
	c5 = c5 + 4;
	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);*/
	return 0;
}