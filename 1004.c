#include<stdio.h>

struct Stu
{
	char name[11];
	char id[11];
	int grade;	
};

int main()
{
	int n;
	scanf("%d",&n);
	
	struct Stu stu[n];
	
	int m;
	for(m = 0; m < n; ++m)
	{
		scanf("%s %s %d",stu[m].name,stu[m].id,&stu[m].grade);		
	}
	
	struct Stu max,min;
	max = stu[0];
	min = stu[0];
	
	for(m = 0; m <n; ++m)
	{
		if(stu[m].grade > max.grade)
		{
			max = stu[m];
		}
		if(stu[m].grade < min.grade)
		{
			min = stu[m];
		}
	}
	
	printf("%s %s\n",max.name,max.id);
	printf("%s %s\n",min.name,min.id);
	
	
	return 0;
}
