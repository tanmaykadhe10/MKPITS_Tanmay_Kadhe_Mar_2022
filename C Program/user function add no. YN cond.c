#include<stdio.h>
#include<conio.h>
void fun1();
void addno();
void main()
{
	fun1();
	
	
}
void fun1()
{
	int a;
	printf("enter the number :");
	scanf("%d",&a);
	addno(a);
}
void addno(int x)
{
	int rem,rev;
	 while(x>0)
	{
		rem=x%10;
		rev=rev+x;
		x=x/10;
		
	}
	printf("addition of number is=%d ",rev);
}
   
