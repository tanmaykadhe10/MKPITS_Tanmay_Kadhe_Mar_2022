/*Write a C program to check a given array of integers and return true if there is a 3 with 
a 5 somewhere later in the given array.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s=0,t=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (t && a[i] == 5) 
        {
            s=1;
        }
        else 
		if(a[i]==3)
        {
            t=1;
        }
    }

    if(s==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
} 
