#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,b;
	printf("enter two Integer a and b :");
	scanf("%d%d",&a ,&b);
	if(a==b)
	{
		printf("TRUE!");
	}
	
	else if((a%5==b%5&&a<b)||a>b)
	{
		printf("a=%d",a);
	}
	else
	{
		printf("b=%d",b);
	}
}
