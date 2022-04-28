#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int s;
	char name[100];
	char back[100];
	
	printf("Enter the name :");
	scanf("%s",name);
	//strore data
	strcpy(back,name);
	//revrse the name
	strrev(back);
	//compare original 
    s=strcmp(back,name);
	
	if(s==0)
	{
		printf("%s Enter name is polindrome",back);
	}
	else
	{
	  printf("%s Enter name is not polindrome",back);
	}
}
