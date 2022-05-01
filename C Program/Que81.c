//check integer either in range 100-200
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter The Integer :");
	scanf("%d",&n);

	if(n>=100 && 200>=n)
	{
		printf("TRUE");
	}
	
	
	else
	{
		printf("Entered Integer not in range..");
	}
}
