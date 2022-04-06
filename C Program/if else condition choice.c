nclude<stdio.h>
#include<conio.h>
void main()
{
  int choice;
  int a,b,c;
  printf("Press 1 for Additon. \n");
  printf("Press 2 for Subtraction. \n");
  printf("Press 3 for Multiplication. \n");
  printf("Press 4 for Divison. \n");
  scanf("%d",&choice);
  
  if(choice==1)
  {
    
    printf("Enter any two Numbers : \n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Additon is = %d",c);
  }
    
    else
	if(choice==2)
    {
       printf("Enter any two Numbers : \n");
       scanf("%d %d",&a,&b);
       c=a-b;
       printf("Sub is = %d",c);
	}
    
    else
	if(choice==3) 
    {
     printf("Enter any two Numbers : \n");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("mul is = %d",c);
	}
	
    else
	if(choice==4)
    {
    printf("Enter any two Numbers : \n");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("Div is = %d",c);
	}
    else
    {
    	printf("you enter wrong key");
	}
    
  
  
}
