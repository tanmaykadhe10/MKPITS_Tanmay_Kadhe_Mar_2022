#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,a1,b,c,n1,n2,n3,rev;
	printf("Enter any three digit number : \n");
	scanf("%d",&a1);
	
	num=a1;
	
	a=num%10;
	num=num/10;
	
	b=num%10;
	num=num/10;
	
	c=num%10;
	
	rev=a*100+b*10+c*1;
	
	if(a1==rev)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}

}
