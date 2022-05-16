#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,b,c,res1,res2,res3;
	printf("enter three Integer a and b and c :");
	scanf("%d%d%d",&a ,&b,&c);
	res1=a-b;
	res2=a-c;
	res3=b-c;
	if(res1>=20||res2>=20||res3>=20)
	{
		printf("TRUE!");
	}
	else
	{
		printf("FALSE!");
	}
}
