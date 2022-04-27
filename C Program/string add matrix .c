#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],res[3][3];
	int i,j;
	printf("Enter the 2*2 matrix m1:");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		
		}
		
	}
	printf("Enter the 2*2 matrix m2:");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		
		}
		
	}
		
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			res[i][j]=m1[i][j] + m2[i][j];
			
		}
	}
	
	
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			
			printf("res[%d][%d]=%d  ",i,j,res[i][j]);
			
		
		}
		
	}

}
