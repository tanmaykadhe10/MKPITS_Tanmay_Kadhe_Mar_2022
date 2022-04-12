#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float div;
	printf(" Enter the two number :");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	if(a!=0)
	{
		div=a/b;
		printf("Divisible is possible %f\n",div);
	}
	
	else
	{
	  printf("divisible is not possible");
	}
}
