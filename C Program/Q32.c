#include<stdio.h>
#include<conio.h>
void main()
{
	int a , pass;
	a=10;
	
	while (a!=0)
	{
		printf("enter the password :\n");
		scanf("%d",&pass);
		
		if(pass=1234)
		{
			
			printf("\n Enter the password is correct ");
			a=0;
			
		}
		
		else
		{
			printf("Plese reemter the password");
		}
	}
}
