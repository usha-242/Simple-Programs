#include<stdio.h>
int minimum(int[],int);
void main()
{
    int n,r,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    int nu[n];
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&nu[i]);
    }
    r=minimum(nu,n);
    printf("%d is minimum number",r);
}

int minimum(int nu[],int n)
{
    int min=nu[0],i;
    for(i=1;i<n;i++)
    {

        if(nu[i]<min)
        {
            min=nu[i];

        }
    }
    return min;
}

