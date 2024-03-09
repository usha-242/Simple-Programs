#include<stdio.h>
int highest(int,int[]);
int main()
{
    int n,i,high;
    printf("enter the total number of subjects");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of each sub");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    high=highest(n,marks);
    printf("\nHighest marks=%d",high);
}
int highest(int n,int marks[])
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
    }
    return max;
}


