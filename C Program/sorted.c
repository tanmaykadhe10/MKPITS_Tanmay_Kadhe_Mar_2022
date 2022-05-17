
#include<stdio.h>
#include<conio.h>
void main ()
{
int i,j,temp,n;

printf("Enter the array size :");
scanf("%d",n);
int a[n];

for(i=1;i<n;i++)
{
	 printf("Enter the array element ");
     scanf("%d",a[i]);
     temp=a[i];
     j=i-1;
  while(i>=0 && a [ j ]>temp)
 {
    a[ j+1]=a[j];
    j--;
}
 a[ j+1]=temp;
}
printf("shorted Array :\n");

for(i=0;i<n;i++)
{
	printf("%d \n",a[i]);
}
}
