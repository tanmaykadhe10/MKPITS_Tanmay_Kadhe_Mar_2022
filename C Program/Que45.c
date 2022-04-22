#include<stdio.h>
#include<conio.h>
void main()
{
	int n[7],i,x;
	
	printf("Enter the frist numbers of array:\n");
	scanf("%d",&x);
	
	for(i=0; i<7; i++)
	{
		n[i]=x;
		x= 3*x;
	    
		printf("n[%d]= %d\n",i,n[i]);	
	}
	
}
