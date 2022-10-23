# define _CRT_SECURE_NO_WARNINGS 1
void cancel(char str[],char c)
{
	int i = 0;
	for(i=0;str[i]!='\0';i++)
	{
		if (str[i] == c)
		{
			str[i] = '\0';
		}
	}
	for(i=1;i<100;i++)
	{
		for (int j = i;j>=0;j--)
		{
			if (str[j - 1] == '\0')
			{
				char t = str[j - 1];
				str[j - 1] = str[j];
				str[j] = t;
			}
		}
	}
}