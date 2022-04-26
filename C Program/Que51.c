#include<stdio.h>
#include<conio.h>
void main()
{
	int x ,y;
	
	printf("Enter the two numbers:\n");
	scanf("%d%d",&x,&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("After swaping number x , y :\n%d \n%d",x,y);
	

}
