#include<stdio.h>
int main()
{
	int i,j,n;
	for(j=1;j<=100;j++)
	{
		
		for(i=2;i<j;i++)
		{
			n=1;
			if(j%i==0)
			{
			//	printf("\n %d not prime no",j);
				n=0;
				break;
				
			}
		}
		if(n==1)
		{
			printf("\n %d prime no",j);
		}
	}
	return 0;
}