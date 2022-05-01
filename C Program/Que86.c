//check last digit same or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf(" Enter Any Two Number : ");
	scanf("%d %d",&n1,&n2);
	
	if((n1%10)==(n2%10))
	{
		printf("TRUE !");
	}
	else
	{
		printf("FALSE !");
	}
}

