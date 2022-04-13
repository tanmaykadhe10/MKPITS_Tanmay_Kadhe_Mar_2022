#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,r;
	a=0;
	b=1;
	
	printf("enter r:");
	scanf("%d",&r);
	
	printf("%d %d",a,b);
	c=0;
	while(c<=r)
	{
		c=a+b;
		 
		 if(c<=r)
		 {
		 	printf("%d \n",c);
		 }
		
		a=b;
		b=c;
	}
	
	
}
