#include<stdio.h>
#include<conio.h>
void even();
void main()
{
	even();
	
}
void even()
{
	
	int i=0;
	do 
	{
		i++;
		if(i%2==0)
		{
		printf("%d ",i);
		}
		
	}
	
	while(i<=10);
   
}
