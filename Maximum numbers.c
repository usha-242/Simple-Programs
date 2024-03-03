#include<stdio.h>
int maximum(int[],int);
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
    r=maximum(nu,n);
    printf("%d is maximum number",r);
}

int maximum(int nu[],int n)
{
    int max=nu[0],i;
    for(i=1;i<n;i++)
    {

        if(nu[i]>max)
        {
            max=nu[i];

        }
    }
    return max;
}
