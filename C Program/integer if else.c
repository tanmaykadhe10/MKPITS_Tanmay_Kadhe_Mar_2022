#include<stdio.h>
#include<conio.h>
void main()
{
	int p, q, r, s;

    printf("enter the frist integer :");
    scanf("%d",&p);
    
    printf("enter the second integer :");
    scanf("%d",&q);
    
    printf("enter the third integer :");
    scanf("%d",&r);
    
    printf("enter the fourth integer :");
    scanf("%d",&s);
    
    if ((r>0)&&(r>0)&&(p%2==0)&&(q>r)&&(s>p)&&((r+s)>(p+q)))
    
    {
    	printf("correct value \n");
    	
	}
	else
	printf("wrong balue\n");
	
}
