#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,x=51,res1,res2;
	printf("Enter the number=");
	scanf("%d",&num1);
	
	if(num1>x)
	{
		res1=(num1-x)*3;
		printf("number gretter than 51 then diff. multiplied by3= %d",res1);
	}
	else
	{
		res2=x-num1;
		printf("number  not gretter than 51 so diff.(num-x)=%d",res2);
	}
}
