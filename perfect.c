#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the no=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		
		sum=sum+i;
     	}
	}
    if(sum==n)
	{
		printf(" %d is a perfect no ",n);
		
	}
	else
	{
		printf(" %d not a perfect no",n);
	}
	return 0;
}