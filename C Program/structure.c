#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[30];
}s1;
void main()
{
	printf("Enter student id :");
	scanf("%d",&s1.id);
	printf("Enter student name :");
	scanf("%s",&s1.name);

	printf("student id :%d",s1.id);
	printf(" \nstudent id :%s",s1.name);
	
}
