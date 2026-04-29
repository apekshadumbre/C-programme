#include<stdio.h>
#include<string.h>
int main()
{
	char src[]= "neha";
	char dest[20];
	strcpy(dest,src);
	printf("%s",dest);
	return 0;
}