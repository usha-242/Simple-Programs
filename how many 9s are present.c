#include<stdio.h>
int nines(int n);
void main()
{
    int n;
    printf("enter the value  of n");
    scanf("%d",&n);
    nines(n);
}
int nines(int n)
{
    int i,ld,count=0;
    while(n!=0)
    {
        ld=n%10;
        if(ld==9)
        {
            count++;
        }
        n=n/10;
    }
     printf("number of nines is %d",count);

}
