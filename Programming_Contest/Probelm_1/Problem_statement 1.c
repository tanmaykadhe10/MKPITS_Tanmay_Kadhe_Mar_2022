
#include<conio.h>
int main ()
{
    int i,j,a,b,n,x;
    printf("Enter the number :");
    scanf("%d",&n);
    a=n;
    b = n+(n-1);
    
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i<=n-1)
            {        
                if(i==0)
                {
                printf("%d ",a);
                }
                if(i>=1)
                {
                    if(j<i)
                    {
                        printf("%d ",a-j);
                    }
                    else if(j>=i && j<b-i)
                    {
                        printf("%d ",a-i);
                    }
                    else 
                    {
                        printf("%d ",(j-a+1)+1);
                    }
                }
            }
            else if(i==n-1)
            {
                if(j<n)
                {
                    printf("%d ",a-j);
                }
                else
                {
                    printf("%d ",(j-a+1)+1);
                }
            }
            else if(i>=n)
            {
                x = b-i-1;
                if(i==b)
                {
                printf("%d ",a);
                }
                if(j<x)
                {
                    printf("%d ",a-j);
                }
                else if(j>=x && j<b-x)
                {
                    printf("%d ",a-x);
                }
                else 
                {
                    printf("%d ",(j-a+1)+1);
                }    
            }
        }
        printf("\n");
}
}
