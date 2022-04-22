#include<stdio.h>
#include<conio.h>
void main()
{
	float c,D;
	
	printf("Enter A Distance In Centimeter : ");
	scanf("%f",&c);

	D=c/2.54;

	printf("Distance of %f = %f inch",c,D);
}
