#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    fact(n);
}
int fact(int n)
{
    int i,facto=1;
    for(i=1;i<=n;i++)
    {
        facto=facto*i;
    }
    printf("factorial of number=%d",facto);
}
