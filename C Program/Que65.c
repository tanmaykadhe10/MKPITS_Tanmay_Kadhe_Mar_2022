#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y ,temp;
	
	printf("Enetr the 1st integer=");
	scanf("%d",&x);
	printf("Enetr the 2nd integer=");
	scanf("%d",&y);
	if(x>y)
	{
		temp=x;
		x=y;
		y=temp;
		
	}
	if(y%x==0)
	{
		printf("it is multiplied....\n");
	}
	else
	{
		printf("it is  not multiplied....\n");
	}

}
