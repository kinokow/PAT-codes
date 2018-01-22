#include <stdio.h>

int main()
{
	char ch[101];
	
	for(int i=0;i<101;i++)
	{
		ch[i] = '0';
	}
	
	
	scanf("%s",ch);
	
	char  chr[10][5] =
	{
		{"ling"},
		{"yi"},
		{"er"},
		{"san"},
		{"si"},{"wu"},{"liu"},{"qi"},{"ba"},{"jiu"}
	};
	
	int num = 0;
	for(int i=0;i<101;i++)
	{
		num += (ch[i]-48);
	}
	num += 48;
	
	
	if(num<10)
	{
		printf("%s",chr[num]);
	}
	else if(num<100)
	{
		int gewei = num%10;
		int shiwei = num/10;
		
		printf("%s ",chr[shiwei]);
		printf("%s",chr[gewei]);
	}
	else if(num<1000)
	{
		int baiwei = num/100;
		int shiwei = (num%100)/10;
		int gewei = num%10;
		
		printf("%s ",chr[baiwei]);
		printf("%s ",chr[shiwei]);
		printf("%s",chr[gewei]);
	}
	
	return 0;	
	
}
