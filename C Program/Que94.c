#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,res1,res2;
	printf("enter two Integer a :");
	scanf("%d",&a);
	res1 = a%3;
	res2 = a%7;
	if(res1==0^res2==0)
	{
		printf("TRUE!");
	}
	else
	{
		printf("FALSE!");
	}
}
