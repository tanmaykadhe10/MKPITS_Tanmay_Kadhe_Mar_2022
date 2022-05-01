#include<stdio.h>
#include<conio.h>
void main()
{
	int count=1,n;
	float x,y=1.0;
	
	printf("Enter the value of x and n : \n");
	scanf("%f%d",&x,&n);
	 for(count=1;count<=n;count++)
	 {
	 	y=y*x;
	 	
	 }
	 printf("x=%f; n=%d; \nx to power n=%f",x,n,y);
	
}
