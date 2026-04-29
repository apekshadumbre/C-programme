#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no=");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("not prime");
		return 0;
	
     	}
	}
    if(n>1)
	{
		printf(" %d is a prime no ",n);
		
	}
	else
	{
		printf("not prime number %d",n);
	}
	
	return 0;
}