#include<stdio.h>
#include<conio.h>
void main ()
{
   
	int i,n,x ,pos;
	int a[n];
	printf("Enter the size of array  :");
	scanf("%d",&n);
	printf("Enter the array :\n");
	
	for(i=0; i<n ;i++)
	{
    	printf("Enter the element :");
	    scanf("%d",&a[i]);
    }
    for(i=0; i<n ;i++)
    {
	  printf("%d",a[i]);
    }
    printf("\n Enter the added element :");
    scanf("%d",&x);
    printf(" \n Enter the possition :");
    scanf("%d",&pos);
    
    n++;
    
    for(i=n-1;i<=pos;i++)
    {
    	a[i]=a[i-1];
    	
    	a[pos-1]=x;
    	
    	for(i=0;i<n;i++)
    	{
    		printf("%d \n",a[i]);
    		
		}
		break;
	}
    
}
	
	
