#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	
	printf("Enter the cordinate od X And Y :");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",& y);
	
	if(x>0 &&y>0)
	{
		printf("Enter cordinate is quedrant 1 \n");
	}
	else if(x<0 &&y>0)
	{
		printf("Enter cordinate is quedrant 2 \n");
	}
	else if(x<0 &&y<0)
	{
		printf("Enter cordinate is quedrant 3 \n");
		
	}
	else if(x>0 &&y<0)
	{
		printf("Enter cordinate is quedrant 4 \n ");
	}
}
