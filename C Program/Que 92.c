#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,b,add,sub;
	printf("enter two Integer a and b :");
	scanf("%d%d",&a ,&b);
	add = a+b;
	sub=a-b;
	if(a==5 || b==5 ||add==5||sub==5)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}
