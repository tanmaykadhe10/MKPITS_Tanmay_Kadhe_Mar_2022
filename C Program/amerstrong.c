#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,a1,b,c,n1,n2,n3,sum;
	printf("Enter any three digit number : \n");
	scanf("%d",&a1);
	
	num=a1;
	
	a=num%10;
	num=num/10;
	
	b=num%10;
	num=num/10;
	
	c=num%10;
	
	n1=a*a*a;
	n2=b*b*b;
	n3=c*c*c;
	
	sum=n1+n2+n3;
	
	if(a1==sum)
	{
		printf("number is armstrong  ");
	}
	else
	{
		printf("number is not armstrong");
	}
	
}
