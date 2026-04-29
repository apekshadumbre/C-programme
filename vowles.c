#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character=");
	scanf("%c",&ch);
	while(ch<='z')
	{
		printf("%c\n",ch);
		ch++;
	}
	printf("\nvowels are=");
	for(ch='a';ch<='z';ch++)
	{
		if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
		{
			printf("%c",ch);
		}
	}
	return 0;
	
}