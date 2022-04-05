#include<stdio.h>
#include<conio.h>

int main()
{
	int width=5;
	int height=7;
	int perimeter , area ;
	
	perimeter = 2*(height+width);
	printf("perimeter of rectangle =%d inches\n",perimeter);
	
	area = height*width;
    printf("area of rectangle =%d square inches\n",area);
	
}
