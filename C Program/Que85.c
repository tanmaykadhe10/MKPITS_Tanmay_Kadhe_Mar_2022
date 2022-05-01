//check whether the given two integer are in range 40 60 inclusive print true one of them is in range otherwise False.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf(" Enter Any Two Number : ");
	scanf("%d %d",&n1,&n2);

	if((n1>=40&&n1<=60 &&n2>=40&&n2<=60)||(n1>=70&&n1<=100 &&n2>=70&&n2<=100))
	{
		printf(" TRUE !");
	} 
	else
	{
		printf(" FALSE !");
	}
} 
