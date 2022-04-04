#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,n2,n3,a,b,c,sum;
	printf("enter the  three digit number : "  );
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	
	a=n1*n1*n1;
	b=n2*n2*n2;
	c=n3*n3*n3;
	
	sum=a+b+c;
	if(num==sum);
		{
		printf("it number is amrstrong=%d ",sum);
}
	
    if(num!=sum);
	{
		printf("it number is not amrstong ");
	}
}
