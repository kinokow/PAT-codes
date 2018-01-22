#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char buf[81];

	gets(buf);

	int i;
	int num = 0;
	for (i = 0; i < strlen(buf); ++i)
	{
		if (isspace(buf[i]))
		{
			num++;
		}
	}

	char **p = (char **)malloc(sizeof(char*)*(num + 1));
	for (i = 0; i < num + 1; i++)
	{
		p[i] = (char *)malloc(80);
	}

	i = num;
	char *q = strtok(buf, " ");
	while (q)
	{
		strcpy(p[i--], q);
		q = strtok(NULL, " ");
	}

	for (i = 0; i < num; )
	{
		printf("%s ", p[i++]);
	}
	printf("%s", p[i]);


	system("pause");
	return 0;
}