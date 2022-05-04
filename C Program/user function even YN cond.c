#include<stdio.h>
#include<conio.h>
void fun1();
void even();
void main()
{
	fun1();
	
	
}
void fun1()
{
	int i=0;
	even(i);
}
void even(int x)
{
	do 
	{
		x++;
		if(x%2==0)
		{
		printf("%d ",x);
		}
		
	}
	
	while(x<=10);
   
	}


