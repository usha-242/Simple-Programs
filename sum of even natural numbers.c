#include<stdio.h>
int add(int);
int main()
{
    int n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    sum=add(n);
    printf("sum of even natural numbers is=%d",sum);
}
int add(int n)
{
    int i=1,sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    return sum;
}
