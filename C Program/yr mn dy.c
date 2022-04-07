#include<stdio.h>
#include<conio.h>
void main()
{
	int  ndy,yr,mn,dy ;
	printf("enter the number of days:");
	scanf("%d",&ndy);
	
	yr=ndy/365;
	
	ndy= ndy-(365*yr);
	mn= ndy/30 ;
	
	dy=ndy-(mn*30);
	
	printf("year %d",yr);
	printf("\n month %d",mn);
	printf("\n day %d",dy);
	
}
