#include<stdio.h>
#include<conio.h>

int main()
{
	int radius;
	
    float pi , perimeter , area ;
	radius=6;
	pi=3.142;
	
	perimeter = 2*pi*radius;
	printf("perimeter of circle =%f inches\n",perimeter);
	
	area = pi*radius*radius;
    printf("area of circle =%f square inches\n",area);
	
}
