#include<stdio.h>
int avg(int[],int n);
int main()
{
    int n,i,average;
    printf("enter the total number of subjects");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of subject");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    average=avg(marks,n);
    printf("\naverage marks=%d",average);
}
int avg(int marks[],int n)
{
    int sum=0,ave,total=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
        total++;
    }
    printf("\nsum=%d",sum);
     total=n;
     printf("\ntotal number of marks=%d",total);
    ave=sum/total;
    return ave;
}

