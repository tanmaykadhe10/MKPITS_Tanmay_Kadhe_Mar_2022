#include<stdio.h>
#include<conio.h>
void arth();
void main()
{
	arth();
}
void arth()
{
	int num1,num2,resadd,ressub,resmul,resdiv;
	printf("Enter the number num1 & num2 : \n");
	scanf("%d %d",&num1,&num2);
	
	resadd=num1+num2;
	ressub=num1-num2;
	resmul=num1*num2;
	resdiv=num1/num2;
	
	printf("addition= %d\n",resadd);
	printf("substraction = %d\n",ressub);
	printf("multipication = %d\n",resmul);
	printf("disision = %d\n",resdiv);
}
	
