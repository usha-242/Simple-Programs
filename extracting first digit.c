#include<stdio.h>
void main()
{
    int n,first_digit;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>=10)
    {
        n=n/10;
    }
    first_digit=n;
    printf("fist digit of number is=%d",first_digit);
}
