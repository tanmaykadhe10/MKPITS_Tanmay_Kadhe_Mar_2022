#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i,t;
	for(i=0; i<6; i++) 
	{	
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}

	for(i=0; i<6; i++) 
	{
		if( i<(6/2) ) 
		{
			t = a[i];
			a[i] = a[6-(i+1)];
			a[6-(i+1)] = t;
		}
	}

	for(i=0; i<6; i++) 
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
} 
