# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
int main()
{
	///*int i = 0;
	//while (i <= 10)
	//{
	//	i++;
	//	if (i == 5)
	//		continue;
	//	printf("%d ", i);
	//}
	//return 0;*/
	///*int ch = getchar();
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}*/
	/*int ret = 0;
	char password[20] = { 0 };
	printf("����������:");
	scanf("%s", password);
	while (getchar() != '\n')
	{
		;
	}
	printf("��ȷ��Y/N:");
	ret = getchar();
	if(ret=='Y')
	{
		printf("����ɹ�");
	}
	else
	{
		printf("ʧ��");
	}
	return 0;*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;*/
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		else if (i == 7)
			break;
		printf("%d ", i);
	}
	printf("\n%d ", i);
	return 0;*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;*/
	/*for (;;)
	{
		printf("hehe");
	}
	return 0;*/
	///*int i = 0;
	//int j = 0;
	//for (; i < 10; i++)
	//{
	//	for (j=0; j < 10; j++)
	//	{
	//		int n = i * 10 +j+1;
	//		printf("hehe%d\n",n);
	//		
	//	}
	//}
	//return 0;*/
	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	//{
	//	printf("hehe");
	//}
	//return 0;
	/*int i = 0;
	int k = 0;
	for (i = 0, k = 0;4; i++, k++)
	{
		k++;
	}
	return 0;*/
	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	} while (i <= 10);
		return 0;*/
	/*����n�Ľ׳�*/
	//int n;
	//int i = 1;
	//int p = 1;
	//printf("��Ҫ����˭�Ľ׳ˣ�");
	//scanf("%d", &n);
	//for (i=1; i<=n; i++)
	//{p = p * i;
	//if (i == n)
	//	printf("\n�׳�Ϊ%d", p);
	//}
	//printf("\n%d", p);//��ʱi=n+1,p=720
	//i = 1;
	//p = 1;
	//do
	//{
	//	p = p * i;
	//	i++;
	//} while (i <= n);
	//printf("\n�׳�Ϊ%d", p);
	//while (i <= n)
	//{
	//	p = p * i;
	//	i++;
	//}
	//printf("\n%d",p);//
	/*����1��2..10�׳˺�*/
//int i = 1, sum=0 , n = 1, m = 0;
//int a = 1, b = 1, c = 1, d = 1, e = 1, f = 1, g = 1, h = 1, j = 1, k = 1;
//int arr[] = { a,b,c,d,e,f,g,h,j,k };
//for (n = 1; n <= 10; n++)
//{
//	for (i = 1; i <= n; i++)
//	{
//		arr[m] = arr[m] * i;
//
//	}
//	
//	
//	m++;
//}
//
//sum = arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9] + arr[0];
//printf("%d\n", sum);
//int n = 0;
//int i = 0;
//int ret = 1;
//int sum = 0;
//for (n = 1; n <= 10; n++)
//{
//	ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	sum = sum + ret;
//}
//printf("sum=%d", sum);
int n = 10;
int i = 0;
int ret = 1;
int sum = 0;
		for (i = 1; i <= n; i++)
			{
					ret = ret * i;
					sum = sum + ret;
				}
		
		
	
	printf("sum=%d", sum);
/*��������*/
//int password = 0;
//int ch = 0;
//int c = 0;
//int i = 0;
//do
//{
//	printf("����������:");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("�����Ƿ���ȷY/N:");
//	c = getchar();
//	if (c == 'Y')
//	{
//		printf("��½�ɹ�");
//		break;
//	}
//	else
//		printf("����һ��\n");
//	i++;
//
//}
//while (i < 3);
//if (i >= 3)
//{
//	printf("��֤ʧЧ");
//}
return 0;
}