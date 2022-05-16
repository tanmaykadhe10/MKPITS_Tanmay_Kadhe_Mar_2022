#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,res1,res2;
	printf("enter two Integer a :");
	scanf("%d",&a);
	res1 = a%10;
//	res2 =a%10;
	if(res1<=2||res1>=8)
	{
		printf("TRUE!");
	}
	else
	{
		printf("FALSE!");
	}
}
