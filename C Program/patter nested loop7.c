#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" %d",c%2);

		}
		printf("\n");
	}
} 
