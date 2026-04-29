#include<stdio.h>
int main()
{
	char str[100];
	int i=0,j,len=0,flag=0;
	
	printf("enter the string=");
	scanf("%s",&str);
	
	//length find
	while(str[len]!='\0')
	{
		len++;
	}
	j=len-1;
	
	//palindrome check
	for(i=0;i< len/2;i++)
	{
		if(str[i]!= str[j])
		{
		   flag=1;
		   break;
		}
		j--;
	}
	if(flag==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}