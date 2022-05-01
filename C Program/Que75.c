#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,add, res;
	printf("Enter the number=");
	scanf("%d",&num1);
	printf("Enter the number=");
	scanf("%d",&num2);
	
	add =num1+num2;
	printf("addition=%d\n",add);
	if(num1==num2)
	{
		res=(num1+num2)*3;
		printf("No.is same triple addition=%d",res);
	}
	else
	{
		printf("Not equal ");
		
	}
}
	
