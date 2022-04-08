#include<stdio.h>
#include<conio.h>
void main()
{
   int  a,b ,res ;
   printf("enter the frist number :");
   scanf("%d",&a);
   printf("enter the second number :");
   scanf("%d",&b);
   if (a>b)
   {
   	res= a;
   	a=b;
   	b=res;
   	
   }
   if ((b%a)==0)
   {
   	printf("it is multiplied .");
   }
   else
   {
   	printf("it is not multiplied");
   }
}
