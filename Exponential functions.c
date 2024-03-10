#include<stdio.h>
 int exp(int);
 int main()
 {
     int n,sum;
     printf("enter the n");
     scanf("%d",&n);
     exp(n);
 }
int exp(int n)
{
    int i,sum=0,x=2;
    for(i=0;i<=n;i++)
    {
        printf("%d^%d",x,i);
        printf("+");
        sum=sum+pow(x,i);
    }
    printf("\nsum=%d",sum);
}
