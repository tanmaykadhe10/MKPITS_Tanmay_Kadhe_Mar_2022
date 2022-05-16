#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
	fun();
}
void fun ()
{
	static int i=1;
//	if(i==100)
	return ;
	int num ,fact;
	printf("Enter Number : ");
	scanf("%d",&num);


		fact=fact*num;
	
	printf("Factorial is %d ",fact);
	fun();
}

