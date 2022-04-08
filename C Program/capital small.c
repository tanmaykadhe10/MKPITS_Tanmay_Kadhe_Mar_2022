#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter any character: ");
    scanf("%c", &a);

    if(a>='a'&&a<='z') 
    {
        printf("'%c' is small alphabet",a);
    }
    else
    if(a>='A'&&a<='Z')
    {
    	printf("'%c' is Capital alphabet.",a);
	}
    else 
	if(a>=0&&a<=9)
    {
        printf("'%c' is digit.",a);
    }
    else 
    {
        printf("'%d' is special character.",a);
    }
}
