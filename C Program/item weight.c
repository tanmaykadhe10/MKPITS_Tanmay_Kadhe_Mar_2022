#include<sdtdio.h>
#include<conio.h>

void main()
{
	int a1,a2,b1,b2, result;
	printf("weight - item1 :\n");
	scanf("%f",&a1);
	printf("weight - item2 :\n");
	scanf("%f",&a2);
	printf("number item1 purches :\n");
	scanf("%f",&b1);
	printf("number item2 purches :\n");
	scanf("%f",&b2);
	result= ((a1*b1)+(a2*b2))/(b1+b2);
	printf("result is = %f \n",result);
}
