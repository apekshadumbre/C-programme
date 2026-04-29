#include<stdio.h>
int main()
{
	int i=1,n,sum;
	printf("enter the no");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	return 0;
}