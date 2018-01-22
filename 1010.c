#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main01()
{
	int i = 0;
	int num[1024] = { 0 };
	do {
		scanf("%d", &num[i++]);    
	} while ((getchar()) != '\n');



	int m = 0;
	for (m = 1; m < i; m += 2)
	{
		if (num[m] > 1)
		{
			printf("%d %d ", num[m - 1] * num[m],num[m]-1);
		}
		else
		{
			if (num[m] == 1)
			{
				printf("%d 0", num[m-1]);
				break;
			}
			printf("0 0");
		}
	}
	system("pause");
	return 0;
}


int main()
{
	int a, b;
	int flag = 0;
	while (scanf("%d %d",&a,&b))
	{
		if (b > 1)
		{
			printf("%d %d ", a*b, b - 1);
		}
		else if (b == 1)
		{
			printf("%d 0", a);
			flag = 1;
		}
		else if (b == 0)
		{
			if (flag)
			{
				break;
			}
			else
			{
				printf("0 0");
			}
		}
	}

	return 0;
}