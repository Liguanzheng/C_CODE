# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
void print(int *arr,int sz)
{
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d ", *(arr + i));
	}
}
void printfx(int n)
{
	int i = 0, j = 0;
	for (i = 1;i<=n;i++)
	{
		for (j = 1;j<=i;j++)
		{
			printf("%2d*%-2d=%-3d\t", i, j, j * i);
		}
		printf("\n");
	}
}
void printb(int n,int i)
{
	
	printf("%d ", (n >> i) & 1);
	if (i != 0)
	{
		i--;
		printb(n ,i);
	}
}
void reverse (char* arr,int left,int right)
{
	int t = arr[left];
	arr[left] = arr[right];
	arr[right] = t;
	left++;
	right--;
	if (left < right)
		reverse(arr, left, right);
}
int my_strlen(char* arr)
{
	int i = 0;
	int count = 0;
	while(arr[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
void Reverse(char* arr)
{
	int right = my_strlen(arr) - 1;
	char t = arr[0];
	arr[0] = arr[right];
	arr[right] = '\0';
	if(right>=2)
	Reverse(arr + 1);
	arr[right] = t;
}
int DigitSum(unsigned int n)
{
	int r = n % 10;
	n = n / 10;
	int sum = 0;
	if (n != 0)
	{
		return r+ DigitSum(n);
	}
	else
		return r;
}
int digitsum(unsigned int n)
{
	if (n > 9)
		return digitsum(n / 10) + n % 10;
	else
		return n;
}
double XK(int n,int k)
{
	if (k > 0)
		return n * XK(n, k - 1);
	else if (k < 0)
		return 1.0 /XK(n,-k);
	else
		return 1;
}
int main()
{
	/*int m, n, a, b, max = 0;
	scanf("%d,%d", &m, &n);
	for(a=m;;a++)
	{
		if (a % m == 0 && a % n == 0) break;
	}
	                 for(b=a;;b--)
					 {
						 if (m % b == 0 && n % b == 0) break;
					 }
					                  if (max < b)max = b;
									  printf("%d,%d\n", a, max);
	return 0;*/
	/*int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d,%d", a, b);*/
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);*/
	/*int n = 0;
	scanf("%d", &n);
	printfx(n);*/
	/*int n = 0;
	scanf("%d", &n);
	int i = 31;
	printb(n,i);*/
	/*int left = 0, right = 0;
	char arr[] = "abcdefg";
	right = sizeof(arr)/sizeof(arr[0]) - 2;
	reverse(arr, left, right);
	printf("%s", arr);*/
	/**char arr[] = "abcdefg";
	///*int i = my_strlen(arr);
	//printf("%d", i);
	//Reverse(arr);
	//printf("%s", arr);*/
	/*int n = 0;
	scanf("%d", &n);
	int sum=digitsum(n);
	printf("%d", sum);*/
	int n = 0,k=0;
	scanf("%d%d", &n,&k);
	double i = XK(n, k);
	printf("%f", i);
}