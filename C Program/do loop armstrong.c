#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,i,b,c,n1,n2,n3,sum;
	
	i=1;
	do
	{
		n1=i-((i/10)*10);
		n2=((i/10)-(i/100)*10);
		n3=((i/100)-(1/1000));
		
		sum=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
		 if(sum==i)
		{
			printf("\n number is amstrong :%d",sum);
		}
		i++;
	}
	while(i<=999);
	
	
}
	
