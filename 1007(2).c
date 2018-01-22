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
	scanf("%d",&n);
	
	int s1 = 3;
	int s2 = 3;
	
	int count = 0;
	int i;
	for(i=3;i<=n;)
	{
		if(su(i))
		{
			s1 = s2;
			s2 = i;
			if(s2-s1==2)
			{
			printf("s2 = %d, s1 = %d\n",s2,s1);
			count++;
			}		
		}
		i+=2;		
	}
	printf("%d\n",count);
	return 0;
 } 
