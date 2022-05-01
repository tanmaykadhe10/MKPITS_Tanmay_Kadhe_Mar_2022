#include<stdio.h>
#include<conio.h>
void sub();
void main()
{
	sub();
}
void sub()
{
	int num1,num2,res;
	printf("Enter the number num1&num2: \n");
	scanf("%d %d",&num1,&num2);
	
	res=num1-num2;
	printf("substraction=%d",res);
}
