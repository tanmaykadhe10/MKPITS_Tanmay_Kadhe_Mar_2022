#include<stdio.h>
#include<conio.h>
void main()

{
	int fuel , dist;
	float avg;
	
	printf("enter the total distance :");
	scanf("%d",&dist);
	
	printf("enter the total spent in liter :  ");
	scanf("%d",&fuel);
	
	avg = dist/fuel;
	
	printf("average consumption (km/l) %.3",avg);
	printf("\n");
	
	
}
