#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r;
	printf("Enter any number : ");
	scanf("%d",&n);
	do
	{
		r=n%10; 
		n=n/10;     
	  
	    sum=sum+r;    
	  
	      
	
		printf("divisible is %d",sum);

	}
	while(n>0);   
}
