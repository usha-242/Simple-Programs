#include<stdio.h>
int elements(int n);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    elements(n);
}
int elements(int n)
{
    int i,total=0;
    while(n!=0)
    {
        n=n/10;
         total++;
    }
    int total_elements=total;
    printf("total number of elements=%d",total_elements);
}
