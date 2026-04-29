#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,temp;
	printf("enter the 1 element\n=");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2 element\n=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		temp=a[i][j];
	        a[i][j]=b[i][j];
    	    b[i][j]=temp;
    	    
		}
		printf("befor%d,%d,%d,%d\n",a[i][j],b[i][j],i,j);
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
		
		
			printf("after%d,%d,%d,%d",a[i][j],b[i][j]),i,j;
		
        }   
    }
	return 0;  
	
}