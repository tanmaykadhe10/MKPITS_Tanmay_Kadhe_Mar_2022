#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float s=0;
	
	for(i=1;i<=50;i++)
	{
		s=s+( float )1/i;
	}
	
	printf("value of s :%f\n",s);
}
