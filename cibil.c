#include<stdio.h>
int main()
{
	int salary,cibil,graduated;
	
	printf("enter salary=");
	scanf("%d",&salary);
	
	if(salary>=30000)
	{
		
		printf("enter cibil=");
		scanf("%d",&cibil);
		if(cibil>=750)
		{
			printf("loan apply");
		}
		else
		{
			printf("loan not apply`1");
		}
	}
	
	else 
	{
		printf("enter graduated(graduated==1,nongraduated==0)");
		scanf("%d",&graduated);
		
		if(graduated==1)
		
		{
			printf("loan  apply2");
		}
		else
		{
			printf("not apply");
		}
	
	}
	 
	
	return 0;
}
