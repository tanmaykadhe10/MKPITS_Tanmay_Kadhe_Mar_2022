#include<stdio.h>
#include<conio.h>
void main()
{
	int mass,accl,force;
	printf("enter the mass and accl : \n");
	scanf("%d %d",&mass,&accl);
	force=mass*accl;
	printf("force is = %d",force);
}
