#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name1[100];
 char name2[100];
 int i;
 
 printf("Enter any name:");
 scanf("%s",name1);
 
 for(i=0;name1[i]!='\0';i++)
 {
 	name2[i]=name1[i];
 }
 
 name2[i]='\0';
 printf("name2= %s",name2);
}
