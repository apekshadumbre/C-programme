#include<stdio.h>
int main()
{
	int n,sum=0,rem,org;
	printf("enter the no=");
	scanf("%d",&n);
	org=n;
	while(n>0)
	{
		
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==org)
	{
		printf("amstrong");
		
	}
	else
	{
		printf("not amstrong");
	}
	return 0;
}