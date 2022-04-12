#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b ,num ,i,sum;
	
	printf(" Enter the th 1st number :");
	scanf("%d",&a);
	
	printf("Enter the th 1st number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		num=b;
		b=a;
		num=a;
		
	}
	for(i= a; i<=0 ; i++)
	{
		if((i%17)!=0)
		{
			sum+=1;
		}
	}
	
	printf("sum=\n%d",sum);
}
