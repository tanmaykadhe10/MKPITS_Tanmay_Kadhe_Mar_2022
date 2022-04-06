#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max,res;
	printf("enter the frist integer :");
	scanf("%d",&a);
	
	printf("enter the second integer :");
	scanf("%d",&b);
	
	printf("enter the third integer :");
	scanf("%d",&c);
	
	res =(a+b+abs(a-b))/2;
	max=(res+c+abs(res-c))/2;
	printf("maximum value of three integer :%d \n",max);
	printf("\n");
	
}
