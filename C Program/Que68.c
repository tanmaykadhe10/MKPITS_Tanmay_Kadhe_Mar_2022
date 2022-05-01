#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	
	printf(" Number\tsquare\tcube\n");
	
	for(x=0;x<=20;x++)
	{
		printf("%d\t%d\t%d\t\n",x,x*x,x*x*x);
	}
}
