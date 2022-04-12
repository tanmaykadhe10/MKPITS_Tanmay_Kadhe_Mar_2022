#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,x=0 , j=1;
	
	printf(" Enter the number of line :");
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		
	while (x<3)
	{
		printf("%d",j++);
		x++;
	}
	
	x=0;
	printf("\n");
}
	
}
	
