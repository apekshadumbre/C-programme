#include<stdio.h>
int main()
{
	int n,sum,rem,org;
	printf("enter no=");
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
		printf(" is a amstrong");
	}
	else
	{
		printf("not amstrong");
	}
	return 0;
}