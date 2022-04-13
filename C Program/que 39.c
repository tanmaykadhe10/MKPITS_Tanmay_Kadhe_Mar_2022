#include<stdio.h>
#include<conio.h>
void main()
{
	int a , b;
	int i=1,l=1,j=1;
	printf("Enter the number of line:");
	scanf("%d",&a);
	printf("Enter the lines of number:");
	scanf("%d",&b);
	
	while(i<=a )
	{
		i++;
		
		while(j<=b)
		{
			j++;
			printf("%d",l);
			l++ ;
		}
		printf("\n");
	}
}
