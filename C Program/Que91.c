#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,b,res;
	printf("enter two Integer a and b :");
	scanf("%d%d",&a ,&b);
	res = a+b;
	printf("a+b=%d",res);
	if(res>=10 &&res<=20?30:res)
	{
		printf("\n 30");
	}
}
