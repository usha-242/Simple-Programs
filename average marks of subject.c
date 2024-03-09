#include<stdio.h>
int av(int,int[]);
int main()
{
    int n,i,avg;
    printf("enter the total number of subjects");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of each sub");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    avg=av(n,marks);
    printf("\naverage of marks=%d",avg);
}
int av(int n,int marks[])
{
    int i,sum=0;
    float average;
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("total sum=%d",sum);
    average=sum/n;
    return average;
}

