#include<stdio.h>
#include<conio.h>
void main()
{
	double i;
	int j=1;
	double s=0,b;
	
	for(i=1;i<=7;i+=2)
	{
		
		b=(i/j);
		s=s+b;
		j= j*2;
		
	}
	
	printf("value of series is:%.2lf\n",s);
	
}
