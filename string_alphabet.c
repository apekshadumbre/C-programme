#include<stdio.h>
int main()
{
	char str[100];
	int i=0,vowels=0 ,consonante=0;
	printf("enter the string");
		gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z')|| (str[i]>='A'&& str[i]<='z'))
		{
			if(str[i]=='a' || str[i] =='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' 
			|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		     {
				
		        vowels++;
	        }
		
		
		
		else{
		
			consonante++;
		   }
		}
		
		
			
	} 
	printf("vowels=%d consonanat=%d",vowels,consonante);
	return 0;
}