#include<stdio.h>
#include<conio.h>
//enum is also char type
enum wday {sun,mon,tue,wed,thus,fri,sat};
void main()
{
	enum wday day;
	day=mon+1;
	
	printf("%d",day);
}
