#include<stdio.h> 
#include<string.h>

int main()
{
	char ch[10][101];
	memset(ch,0,sizeof(ch));
	
	int num;
	scanf("%d",&num);
	
	int i;
	int n;
	for(i=0;i<num;i++)
	{
		
		scanf("%s",ch[i]);
		
		int p=0;
		int t=0;
		int qita=0;
		int countp,countt;
		for(n=0;n<strlen(ch[i]);n++)
		{
			if(ch[i][n]!='P'&&ch[i][n]!='A'&&ch[i][n]!='T')
			{
				qita++;
				break;
			}
			else 
			{
				if(ch[i][n]=='P')
				{
					if(p>=1)
					{
						break;
					}
					p++;
					countp = n;
				}
				else if(ch[i][n]=='T')
				{
					if(t>1)
					{
						break;
					}
					t++;
					countt = n;
				}
			}
		}
		
		int lena = countp;
		int lenb = countt-countp-1;
		int lenc = strlen(ch[i])-countt-1;
		
		
			
		if(qita==0
		&&p==1
		&&t==1
		&&(lenb>0)
		&&((lena*lenb==lenc)||strstr(ch[i],"PAT")))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
			
	}
	
	
	system("cmd /k");
	
	return 0;
}
