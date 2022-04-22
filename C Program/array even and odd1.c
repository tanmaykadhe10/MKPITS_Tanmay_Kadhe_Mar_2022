#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] ,n, even=0,odd=0;
	
	printf("Enter the 10 integer number  :\n");
    
	for(n=0;n<10;n++)
	{
	
		scanf("%d",&a[n]);
	}
	    
	   for(n=0;n<10;n++) 
	   {
			     
		if(a[n]%2==0)
		
			even++;
	    else
	        odd++;
	    
	    	
        }
        printf("even number%d\n",even);
        printf("odd number%d\n",odd);
		
}
