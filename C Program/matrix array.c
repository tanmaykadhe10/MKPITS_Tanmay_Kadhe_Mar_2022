#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[1][1];
	int i,j;
	printf("Enter the 2*2 matrix:");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		
		}
		
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=%d\n",i,j,m1[i][j]);
			
		
		}
		
	}
}
