#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name1[100];
 char name2[100];
 int result;
 
 printf("enter any name1 :");
 scanf("%s",name1);
 
 printf("enter any name2 :");
 scanf("%s",name2);
 
 result=strcmp(name2,name1);
 
 printf("%d",result);
 
}
