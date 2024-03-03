#include<stdio.h>
int prime(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    prime(n);
}
int prime(int n)
{
    int i,flag=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
}
