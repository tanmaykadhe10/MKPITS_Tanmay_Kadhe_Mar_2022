#include<stdio.h>
#include<conio.h>
void main ()
{
	int i , j ,k, n,m=1 ;
	printf("Enter the rows :");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf(" ");
			
		}
		for (k=1;k<=m;k++)
		{
			printf("*");
		}
		printf("\n");
		m++;
			
		}
		
	
}
