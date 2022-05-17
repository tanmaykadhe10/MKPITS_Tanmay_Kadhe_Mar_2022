#include<stdio.h>
#include<conio.h>
void main ()
{
	int i , j ;
	
	for (i=5;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",'A'+j-1);
			//not ussing aski code
		}
		printf("\n");
	}
}
