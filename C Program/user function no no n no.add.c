#include<stdio.h>
#include<conio.h>
void addno();
void main()
{
	addno();
	
}
void addno()
{
	int a,rem,rev=0;
	printf("enter the number :");
	scanf("%d",&a);
   while(a>0)
	{
		rem=a%10;
		rev=rev+a;
		a=a/10;
		
	}
	
	printf("addition of number is=%d ",rev);
    
   
}
