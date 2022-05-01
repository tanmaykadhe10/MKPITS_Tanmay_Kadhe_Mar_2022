#include<stdio.h>
#include<conio.h>
void fun1();
void arth();
void main()
{
	fun1();
}
void fun1()
{
	int num1,num2;
	printf("Enter the number num1 & num2 : \n");
	scanf("%d %d",&num1,&num2);
	arth(num1,num2);
}
void arth(int x,int y)
{
	int resadd,ressub,resmul,resdiv;
	resadd=x+y;
	ressub=x-y;
	resmul=x*y;
	resdiv=x/y;
	
	printf("addition= %d\n",resadd);
	printf("substraction = %d\n",ressub);
	printf("multipication = %d\n",resmul);
	printf("disision = %d\n",resdiv);
}
