#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] , n;
	
	printf("Enter the 10 integer number  :\n");
    
	for(n=0;n<5;n++)
	{
	
		scanf("%d",&a[n]);
	    
	           
		if(a[n]%2==0)
		{
			printf("even number\n",a[n]);
			
		}
	    
	    else
	    {
	    	printf("odd number\n",a[n]);
		}
}
}
