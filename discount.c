#include<stdio.h>
int main()
{
	int amount,premium,orderconfirm;
	
	printf("enter amount");
	scanf("%d",&amount);
	
	printf("enter primium (premium==1,non premium==0)");
	scanf("%d",&premium);
	
	printf("enter orderconfirm(confirm==1,not confirm==0)");
	scanf("%d",&orderconfirm);
	if((amount>=5000)&&(premium==1)&&(orderconfirm==1))
	{
		printf("discount apply");
	}
	else
	{
	   printf("discount not apply");
    }
}