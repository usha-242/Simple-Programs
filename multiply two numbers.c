#include<stdio.h>
int mul(int,int);
void main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    mul(a,b);
}
int mul(int a,int b)
{
    int multi;
    multi=a*b;
    printf("%d",multi);
}
