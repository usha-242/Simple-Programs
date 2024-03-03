#include<stdio.h>
int reverse(int n);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    reverse(n);
}
int reverse(int n)
{
    int i,ld,rev=0;
    while(n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    printf("reversed number=%d",rev);
}
