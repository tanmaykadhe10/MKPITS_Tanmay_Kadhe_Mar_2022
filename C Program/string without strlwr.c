#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[100];
 int i;
 char lowercase;
 
 printf("Enter any name:");
 scanf("%s",name);
 
 for(i=0;name[i]!='\0';i++)
 {
 	if(name[i]>='A'&&name[i]<='Z')
 	{
 		name[i]=name[i]+32;
	}
  }
  
  printf("The given name in lower Case=%s",name);
 }
