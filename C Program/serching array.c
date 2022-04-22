#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,ser;
	
	printf(" Enter the 5 numner of array :\n");
	
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the serching number");
	scanf("%d",&ser);
	
	for(i=1;i<=5;i++)
	{
		if(a[i]==ser)
		{
			printf(" it number is present");
		}
		
		
	}
	
	
			printf(" it number not pesent ");
		
}
