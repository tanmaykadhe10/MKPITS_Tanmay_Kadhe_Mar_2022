#include<stdio.h>
#include<conio.h>
void main()
{
	char letters[500]="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	
	printf("List of Integer IN Letters (a-z , A-Z)\n");
	for(n=0;n<53;n++)
	{
		printf("%d\t",letters[n]);
		if((n+1)%6==0)
		{
			printf("\n");
		}
	}
}
