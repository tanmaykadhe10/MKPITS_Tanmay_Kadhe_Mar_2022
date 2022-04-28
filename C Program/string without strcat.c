#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name1[100];
 char name2[100];
 char result[100];
 int i=0,j=0;
 
 
 printf("enter any name1 :");
 scanf("%s",name1);
 
 printf("enter any name2 :");
 scanf("%s",name2);
 
 for(i=0;name1[i]!='\0';i++)
 {
 	result[j]=name1[i];
 	j++;

 }
 for(i=0;name1[i]!='\0';i++)
 {
 	result[j]=name2[i];
 	j++;

 }
 
 result[j]='\0';
 printf("concatenated=%s",result);
 }
 
