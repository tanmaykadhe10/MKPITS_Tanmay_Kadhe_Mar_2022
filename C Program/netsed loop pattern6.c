#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c , a=1;
	for(r=1;r<=10;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
			a++;
		}
	  printf("\n");
	}
}
