/*Write a C program to create a new array taking the first and last elements
 of a given array of integers and length one or more*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[5],c[2];
	printf("Enter Size Of Array \n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter  Array element : ");
		scanf("%d",&a[i]);
	}

	printf("\n");

	c[0]=a[0];
	c[1]=a[4];
	int j;
	for( j=0;j<2;j++)
	{
		printf("%d ",c[j]);
	}

} 
