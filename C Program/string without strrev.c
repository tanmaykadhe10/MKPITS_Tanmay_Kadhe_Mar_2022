#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[100];
 int i,j=0,length=0;
 char reverse[100];
 
 printf("Enter any name:");
 scanf("%s",name);
 
 for(i=0;name[i]!='\0';i++) 
 {
 	length++;
 }
 
 for(i=length-1;i>=0;i--)
 {
 	reverse[j++]=name[i];
 }
 printf("\n reverse=%s",reverse);
}
