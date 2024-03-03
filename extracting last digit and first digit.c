#include<stdio.h>
void ld(int);
void fd(int);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    ld(n);
    fd(n);
}
void ld(int n)
{
    int ld;
    ld=n%10;
    printf("ld=%d",ld);
}
void fd(int n)
{
    int fd;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    printf("\nfd=%d",fd);
}
