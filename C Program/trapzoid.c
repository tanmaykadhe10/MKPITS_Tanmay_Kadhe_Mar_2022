#include<stdio.h>
#include<conio.h>
void main()
{
	int  a,b,h,trzd;
	printf("enter  the value of a  : " );
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of h");
	scanf("%d",&h);
	trzd= a+b*h/2;
	printf("trapzoid area is = %f",trzd);
}
