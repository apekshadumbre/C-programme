#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("1st class");
	}
	else if(marks>=70)
	{
		printf("2nd class");
	}
	else if(marks>=50)
	{
		printf("3rd class");
	}
	else if(marks>=40)
	{
		printf("4th class");
	}
	else if(marks>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}