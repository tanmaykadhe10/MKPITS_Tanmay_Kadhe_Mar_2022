#include<stdio.h>
#include<conio.h>
void main()
{
   float a,b,c ,total;
   printf("enter the frist side :");
   scanf("%f",&a);
   printf("enter the second side :");
   scanf("%f",&b);
   printf("enter)the third side :");
   scanf("%f",&c);
   if (a<(b+c) &&b<(a+c) && c<(a+b))
   {
    	total=a+b+c;
    	printf("\n perimeter of triangle = %f \n",total);
   	
   }
   else 
   {
   	    printf("nit possible  create a triangle");
   }
}
