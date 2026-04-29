#include<stdio.h>
int main()
{
	int arr[5];
	int i,n,max;
	printf("enter the no");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    max=arr[0];
    for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		
		
		{
			max=arr[i];
		}
	}
	printf("max=%d",max);
	
	return 0;
}