#include<stdio.h>
static void sum()
{
	static total=0;
	int num;
	printf("enter number:");
	scanf("%d",&num);
	total=total+num;
	printf("total=%d\n",total);
}
int main()
{
	sum();
	sum();
	sum();
	return 0;
}