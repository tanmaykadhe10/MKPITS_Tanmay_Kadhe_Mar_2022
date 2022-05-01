#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y ,temp,result;
	
	printf("Enetr the 1st integer=");
	scanf("%d",&x);
	
	if(x<0)
	{
		temp=x;
		x=y;
		y=temp;
		
	}
	if(y<0)
	{
		result=y-y-1;
		
	}
	else
	{
		result=y;
	}
	printf("posetive number =%d",result);
}

