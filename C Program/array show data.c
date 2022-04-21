#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2];
	int i;
     printf("Enter the 3 number :");
     
     for(i=0;i<=2;i++)
     {
     	printf("a[%d]=",i);
     	scanf("%d",&a[i]);
	 }
	
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
	
}
