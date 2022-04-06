#include<stdio.h>
#include<conio.h>
void mail()
{
	int hour;
	char id;
	float value , salary;
	
	printf("enter the employees id :");
	scanf("%s",&id);
	
	printf("enter the working hour :");
	scanf("%d",&hour);
	
	printf("salary of employee :");
	scanf("%f",&value);
	 
	salary= value * hour;
	
	printf("\n employee id= %s \n salary =U$ %.21f\n", id,salary);
}
