#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,w;

	printf("x\t x+2\t x+4\t x+6\n\n");
	
	for(x=1; x<15; x+=3)
	{
		x=1;
		y=x+2;
		z=x+4;
		w=x+6;
		printf("x\t x+2\t x+4\t x+6\n",(x),  (y),  (z),  (w));	
		x++;
	}

}
