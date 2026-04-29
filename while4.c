#include<stdio.h>
int main()
{
	int i=1;
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("even%d\n",i);
		}
		else
		{
			printf("odd%d\n",i);
		}
	i++;
	}
	return 0;
}