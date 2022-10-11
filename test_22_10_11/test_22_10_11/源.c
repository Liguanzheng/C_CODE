# define _CRT_SECURE_NO_WARNINGS 1
# include  <stdio.h>
# include <string.h>
# include <assert.h>
char* my_strcpy(char* arr1,const char* arr2)
{
	/*int i = 0;
	int sz = strlen(arr2);
	for (i = 0;i<=sz;i++)
	{
		arr1[i] = arr2[i];
	}*/
	/*while(*arr2!='\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = *arr2;*/
	char* ret = arr1;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++);
	return ret;
}
int my_strlen(const char* c)
{
	assert(c != NULL);
	int count = 0;
	while (*c++ != '\0')
	{
		count++;
	}
	return count;
}
int Judge(char* p)
{
	if (*p == 1)
		return 1;
	else
		return 0;
}
int check()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	/*int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for(i=0;i<=1000;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}*/
	/*char arr1[] = "############";
	char arr2[] = "bit";
	printf("%s", my_strcpy(arr1, arr2));*/
	/*int n = 10;
	int num = 100;
	const int* const p = &n;
	*p = 500;
	p = &num;
	printf("%d", *p);*/
	/*char c[] = "abcdefg";
	printf("%d", my_strlen(c));*/
	/*int a = 10;
	float n = 10.0;
	return 0;*/
	/*int n = 1;
	//char* p = (char*) & n;*/
	/**p = 0;
	if (n == 0x11111100)
		printf("是小端");
	else
		printf("是大端");*/
	/*int ret = check();
	if (ret == 1)
		printf("是小端\n");
	else
		printf("是大端\n");*/
	/*int arr[10] = { 0 };
	int i = 0, j = 0,k=0,t;
	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(j=0;j<9;j++)
	for(k=0;k<9-j;k++)
		if(arr[k+1]>arr[k])
		{
			t = arr[k + 1];
			arr[k + 1] = arr[k];
			arr[k] = t;
		}
	for (i = 0; i < 10; i++)
	printf("%d", arr[i]);*/
	/*unsigned char i = 0;
	for(i=0;i<=255;i++)
	{
		printf("hehe\n");
	}*/
	/*double d = 1e10;
	printf("%lf", d);*/
	/*int n = 9;
	float* pfloat = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *pfloat);
	*pfloat = 9.0;
	printf("%d\n", n);
	printf("%f\n", *pfloat);*/
	/*float f = 5.5;
	return 0;*/
	/*int n = 9;
	printf("%f", n);*/
	/*float n = 9.0;
	printf("%d", n);*/
}