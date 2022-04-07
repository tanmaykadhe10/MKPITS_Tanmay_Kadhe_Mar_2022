#include<stdio.h>
#include<conio.h>
void main()
{
   int num1,num2,num3,num4,num5,ores;
   printf("enter the frist number :");
   scanf("%d",&num1);
   printf("enter the second number :");
   scanf("%d",&num2);
   printf("enter the third number :");
   scanf("%d",&num3);
   printf("enter the fourth number :");
   scanf("%d",&num4);
   printf("enter the fifth number :");
   scanf("%d",&num5);
   
   if (num1%2!=0)
   {
   	  ores=ores+num1;
   }
   else if (num2%2!=0)
   {
   	  ores=ores+num2;
   }
   else if (num3%2!=0)
   {
   	  ores=ores+num3;
   }
   else if (num4%2!=0)
   {
   	  ores=ores+num4;
   }
   else if (num5%2!=0)
   {
   	  ores=ores+num5;
   }
   else
   {
   	printf("other num is even");
   }
   printf("sum of odd number= %d\n",ores);
}
