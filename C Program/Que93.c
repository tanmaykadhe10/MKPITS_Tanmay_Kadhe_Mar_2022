#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,res;
	printf("enter  Integer a  :");
	scanf("%d",&a );
	res = a%13;
	if(res==0)
	{
		printf("it multiple of 13 !");
	}
	else
	{
		printf("it is one or more multiple of 13 !");
	}
}
