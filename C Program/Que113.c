/*Write a C program to create a new array containing the 
middle elements from the two given arrays of integers, each length 5*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],c[2];
	int i;
	printf("Enter the 1st array : \n");
	for(i=0;i<5;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
	printf("Enter the 2nd array : \n");
	for( i=0;i<5;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&b[i]);
	}
	c[0]=a[2];
	c[1]=b[2];
	printf("New array of middle element is : ");
	for( i=0;i<2;i++)
	{
		printf("%d ",c[i]);
	}
} 
