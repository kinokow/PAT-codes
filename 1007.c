#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int su(int i)
{
	int m;
	for (m = 2; m < i; m++)
	{
		if ((i%m) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;

	int i;
	for (i = 3; i <= n - 2;)
	{
		if (su(i)&&su(i+2))
		{
			count++;
		}
		i += 2;
	}
	printf("%d\n", count);

	return 0;
}