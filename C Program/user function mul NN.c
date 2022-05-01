#include<stdio.h>
#include<conio.h>
void mul();
void main()
{
	mul();
}
void mul()
{
	int num1,num2,res;
	printf("Enter the number num1&num2: \n");
	scanf("%d %d",&num1,&num2);
	
	res=num1*num2;
	printf("multiplication=%d",res);
}
