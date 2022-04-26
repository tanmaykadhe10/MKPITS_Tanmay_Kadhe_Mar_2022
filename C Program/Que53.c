#include<stdio.h>
#include<conio.h>
void main()
{
	int x, rem, rev=0;
	
	printf("Enter the number :");
	scanf("%d",&x);
	
	while(x !=0)
	{
		rem = x%10;
		rev=rev*10+rem;
		x/=10;
		
		
	}
	printf(" reverse number: %d",rev);
}
