#include<stdio.h>
#include<conio.h>
void main()
{
	int x ;
	printf("enter the entegern :");
	scanf("%d",&x);
	
	if (x>=0 && x<=20)
	{
		printf(" The integer rage is [0 ,20] \n");
	}
	else if (x>=21 && x<=40)
	{
		printf(" The integer rage is [21 ,40] \n");
	}
	else if (x>=41 && x<=60)
	{
		printf(" The integer rage is [41 ,60] \n");
	}
	else
	{
		printf("you enter integer ouyside range");
	}

}
