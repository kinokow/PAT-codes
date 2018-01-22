#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int num[100]={0};
	scanf("%d",&n);


	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",num+i);
	}

	
	for(i=0;i<n;i++)
	{
		if (num[i] == 0)
		{
			continue;
		}
		int cs = num[i];
		while(cs!=1)
		{
			if(cs%2)
			{
				cs = (3*cs+1)/2;
			}
			else
			{
				cs /= 2;
			}
			
			int m;
			for(m=0;m<n;m++)
			{
				if(num[m]==cs)
				{
					num[m] = 0;
					break;
				}
			}
		}
	}
	
	int m;
	for(i=0;i<n-1;i++)
	{
		for(m=0;m<n-i-1;m++)
		{
			if(num[m]<num[m+1])
			{
				int tmp = num[m+1];
				num[m+1] = num[m];
				num[m] = tmp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(num[i+1])
		{
			printf("%d ",num[i]);
		}
		else
		{
			break;
		}
	}
	printf("%d",num[i]);
	
	system("pause");
	return 0;
} 
