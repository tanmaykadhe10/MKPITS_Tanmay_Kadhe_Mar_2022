#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,r;
	a=0;
	b=1;
	
	printf("enter r:");
	scanf("%d",&r);
	
	printf("%d \n %d",a,b);
	c=0;
	do
	{
		c=a+b;
		 
		 if(c<=r)
		 {
		 	printf("%d",c);
		 }
		
		a=b;
		b=c;
	}
	while(c<=r);
	
	
	
}
