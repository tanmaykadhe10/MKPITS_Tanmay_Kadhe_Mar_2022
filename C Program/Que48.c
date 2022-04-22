#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6];
	int i,sn,p;

	for(i=0; i<6; i++) 
	{
    	printf("Enter Number : ");
		scanf("%d", &a[i]);
	}
	sn = a[0];
	p = 0;

	for(i=0; i<6; i++) 
	{
		if(a[i]<sn) 
		{
			sn= a[i];
			p = i;
		}
	}

	printf("Smallest Value: %d\n", sn);
	printf(" a[%d] = %d\n",a[sn],sn);
}
