#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char chart[100];
 int i;
 int count=0;
 
 printf("Enter any lowercase character:");
 scanf("%s",chart);
 
 for(i=0;chart[i]!='0';i++)
 {
 	if(chart[i]=='a'|| chart[i]=='e'||chart[i]=='i'||chart[i]=='o'||chart[i]=='u')
 	{
 		count++;
	 }
	 
 }
 printf("vowels present in inter character=%d",count);
}
