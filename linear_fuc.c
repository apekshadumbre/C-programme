#include<stdio.h>
   int linear(int a, int x,int b)
   {
   
   return(a*x+b);
   }
int main()
{
	int a,x,b;
	printf("enter a,x,b");
	scanf("%d %d %d",&a,&x,&b);
	
	printf("result=%d",linear(a,x,b));
	return 0;
}
