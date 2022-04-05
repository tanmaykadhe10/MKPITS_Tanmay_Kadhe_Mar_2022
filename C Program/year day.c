#include<stdio.h>
#include<conio.h>

int main()
{
	int day , year ,week , month;
	
    printf("enter the day :");
	scanf("%d",&day);	
	
	year=(day/365);
	month=(day % 365)/30;
	week=(day % 365)/7;
	day= day-((year*365)+(week*7));
    
    printf("year: %d\n",year);
    printf("month: %d\n",month);
    printf("yearn: %d\n",week);
	printf("day: %d\n",day);	
}
