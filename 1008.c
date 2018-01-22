#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	int Num[200] = { 0 };
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", Num + i);
	}

	int n = M % N;

	for (i = N - 1; i >= 0; i--)
	{
		Num[i+n] = Num[i];
	}

	for (i = 0; i < n; i++)
	{
		Num[i] = Num[N + i];
	}

	for (i = 0; i < N-1; i++)
	{
		printf("%d ", Num[i]);
	}
	printf("%d", Num[N - 1]);
	return 0;

}