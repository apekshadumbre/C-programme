#include<stdio.h>
// function declaration
int add(int ,int);

//function defination
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int result;
	result=add(20,40);
	printf("sum=%d",result);
	return 0;
}