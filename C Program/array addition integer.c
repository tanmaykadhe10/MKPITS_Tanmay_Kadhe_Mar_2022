#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5] ,n, sum;
	
	printf("Enter the 5 integer number  :\n");
    
	for(n=1;n<=5;n++)
	{
	
		scanf("%d",&a[n]);
	}
	    
	   for(n=5;n>=0;n--) 
	   {
	   	sum=sum+a[n];
	   }
	   printf("addition of array integer %d",sum);
}
