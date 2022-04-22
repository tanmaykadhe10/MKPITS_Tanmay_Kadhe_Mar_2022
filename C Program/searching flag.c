#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,ser,f=0;
	
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
			f=1;
     	}
		
    }
    if(f==1)
    {
    	printf(" it is present");
	}
	else
	{
		printf(" it is not present");
	}
	
}
    
