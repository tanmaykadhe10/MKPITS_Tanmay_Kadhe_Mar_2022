#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b ,num ,i;
	
	printf(" Enter the th 1st number :");
	scanf("%d",&a);
	
	printf("Enter the th 1st number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		num=b;
		b=a;
		num=a;
		
	}
	for(i= a+1; i<=b ; i++)
	{
		if((i%17)==2 || (i%7)==3)
		{
				printf("\n%d",i);
		}
	}
	

}
