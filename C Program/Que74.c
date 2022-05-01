#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,a1,b,c,d,e,rev;
	printf("Enter any three digit number : \n");
	scanf("%d",&a1);
	
	num=a1;
	a=num%10;
	num=num/10;
	
	b=num%10;
	num=num/10;

	c=num%10;
	num=num/10;
	
	d=num%10;
	num=num/10;
	
	e=num%10;
	
	rev=a*10000+b*1000+c*100+d*10+e*1;
	
	if(a1==rev)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}

}
