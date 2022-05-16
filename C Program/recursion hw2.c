#include<stdio.h>
#include<conio.h>
void fun1();
void main()
{
	fun1();

}
void fun1()
{
    static int i=1;
    if (i==100) 
    return ;
	
	if(i%2==0)
	{
	printf("%d \n ",i);
	}	
    i++;
	fun1();	
		
		

}
