#include<stdio.h>
#include<conio.h>
void main()
{
	char a='(';
	char b='[';
	char c='{';
	char a1=')';
	char b1=']';
	char c1='}';
	
	printf("Enter the paranthesis:");
	scanf("%c %c%c%c%c%c",a,b,c,a1,b1,c1);
	
	if(a==a1||b==b1||c==c1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
}

