#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5],i;
	
	printf("Enter the 5 numbers of array:\n");
	
	for(i=0;i<5;i++)
	{
		printf("eneter the number:");
		scanf("%d",&n[i]);
	}
		for(i=0;i<5;i++)
		{
			if(n[i]< 5)
			{
				printf("A[%d]=%d\n",i,n[i]);
			}
		}
	
	
}
