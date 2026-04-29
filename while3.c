#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the no");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
    }
    printf("%d\n",sum);
    return 0;
		
	
	
}