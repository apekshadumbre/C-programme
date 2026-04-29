#include<stdio.h>
int main()
{
	int a[50],b[50],c[100];
	int i,j,k,n1,n2;
	printf("enter the size of 1 element=");
	scanf("%d",&n1);
	printf("enter the element\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of 2 element=");
	scanf("%d",&n2);
	printf("enter the element\n");
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	i=j=k=0;
	//merge process
	while(i<n1 && j<n2)
	{
		if(a[i] < b[j])
		{
			c[k]=a[i];
		    i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
		
	}
	//remaining element
	while(i < n1)
	{
		c[k++]=a[i++];
	}
	while(j < n2)
	{
		c[k++]=b[j++];
	}
	printf("merged element\n");
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}