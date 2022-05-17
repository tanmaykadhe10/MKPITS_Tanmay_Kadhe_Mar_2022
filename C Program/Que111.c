//addition of array element and print addition is larger array
#include<stdio.h>
#include<conio.h>
void main ()
{
	int a[3],b[3],sum1=0, sum2=0;
	int i,j;
	printf("Enter the first array : \n");
	
	for(i=0;i<3;i++)
	{
		printf("enter the number :");
		scanf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	printf("Enter the second array : \n");
	for (i=0;i<3;i++)
	{
		printf("enter the number :");
		scanf("%d",&b[i]);
		sum2=sum2+b[i];
	}
	
	if(sum1>sum2)
	{
		printf("Largest sum is :\n");
		for(i=0;i<3;i++)
		{
			printf("%d",a[i]);
		}
	}
	else
	{
		printf("Largest sum is :\n");
		for(i=0;i<3;i++)
		{
			printf("%d",b[i]);
		}
	}
}
