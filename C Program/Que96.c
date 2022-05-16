#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,b,c;
	printf("enter three Integer a and b and c :");
	scanf("%d%d%d",&a ,&b,&c);
	
	if(a==b+c||b==a+c||c==a+b)
	{
		printf("TRUE!");
	}
	else
	{
		printf("FALSE!");
	}
}
