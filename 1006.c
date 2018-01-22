#include<stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	
	int b = n/100;
	int s = (n%100)/10;
	int g = n%10;
	
	while(b)
	{
		printf("B");
		b--;
	}
	while(s)
	{
		printf("S");
		s--;
	}
	if(g)
	{
		int m = 1;
		while(m<=g)
		{
			printf("%d",m++);
		}
	}
	
	return 0;	
}
