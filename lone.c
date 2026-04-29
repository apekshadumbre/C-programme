#include<stdio.h>
int main()
{
	int salary,cibil,graduation;
	printf("enter salary=");
	scanf("%d",&salary);
	
	if(salary>=30000)
	{
		printf("enter cibil");
		scanf("%d",&cibil);
		
		if(cibil>=750)
		{
			printf("loan apply 1");
		}
		else
		{
			printf("loan not apply 1");
		}
	}
	else
	{
	
    	printf("enter graduation(graduation==1,nongraduation==0)");
	    scanf("%d",&graduation);
	   
	    if(graduation==1)
	
	    {
		    printf("loan apply2");
		
	    }  
	     else
	    {
		printf("loan not apply 2");
        }
   }
    return 0;
}