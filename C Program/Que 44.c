#include<stdio.h>
#include<conio.h>
void main()
{
	int n[7],i,x;
	
	printf("Enter the 7 numbers of array:\n");
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&x);
		
		if(x>0)
		{
			n[i]=x;
		}
		else
		{
			n[i]=100;
		}
	}
	printf("array value are :\n");
	
	for(i=0;i<7;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}
