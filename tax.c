#include<stdio.h>
int main()
{
	int age,experience,citizenship;
	float salary;
	printf("enter age");
	scanf("%d",&age);
	printf("enter salary");
	scanf("%f",&salary);
	printf("enter experience");
	scanf("%d",&experience);
	printf("enter citizenship(indian==1,non indian==0)");
	scanf("%d",&citizenship);
	if(citizenship==1)
	{
	    if(age>=25)
		
	    {
			if(salary>=100000)
			{
				
					if(experience>=5)
					{
						printf("high tax 30%");
					}
					else
					{
						printf("tax 20%");
					}
			}
			else if(salary>=50000)
			{
				printf("10% tax");
			}
			else
			{
				printf("no tax");
			}
		}
	
	
	
		
	}
	
}