#include<stdio.h>
#include<conio.h>
void main()
{
	int p=1,n; 
	double q;
	printf("n     2 eo poer n        2 to power -n\n");
	
	for(n=0;n<=10;n++)	
    {
	if(n==0)
	{
		p=1;
	}
	else
	{
		p=p*2;
		q=1.0/(double)p;
	}
	
	printf("\n%2d     %8d     %20.12lf",n,p,q);
}
}
