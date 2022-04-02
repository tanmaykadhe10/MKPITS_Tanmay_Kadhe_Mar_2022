#include<stdio.h>
#include<conio.h>
void main()
{
	int  r,l;
	float pi=3.142,rhcone  ;
	printf("enter  the value of radius  : " );
	scanf("%d",&r);
	printf("enter the value of length :");
	scanf("%d",&l);
	rhcone= pi*r*l;
	printf("right circular cone area is = %f",rhcone);
}
