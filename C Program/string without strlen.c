#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[100];
 int i,count=0;
 
 printf("Enter any name:");
 scanf("%s",name);
 
 for(i=0;name[i]!='\0';i++) 
 {
 	count=count+1;
 }
  printf("Length=%d",count);

}
