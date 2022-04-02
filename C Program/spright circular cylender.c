#include<stdio.h>
#include<conio.h>
void main()
{
	int  r,h;
	float pi=3.142,rhc  ;
	printf("enter  the value of radius  : " );
	scanf("%d",&r);
	printf("enter the value of height :");
	scanf("%d",&h);
	rhc= 2*pi*r*h;
	printf("sphere area is = %f",rhc);
}
