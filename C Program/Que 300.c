#include<stdio.h>
#include<conio.h>
void main ()
{
	int i , j , n ;
	printf("Enter the rows :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n-1;j++)
		{
			printf(" ");
			
		}
		for (j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		
			
		}
		
	
}
