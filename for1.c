#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		i*n;
		printf("\n%d*%d=%d",i,n,i*n);
	}
	return 0;
}