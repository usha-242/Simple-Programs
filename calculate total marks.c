#include<stdio.h>
int calculate_total(int,int[]);
int main()
{
    int n,total,i;
    printf("enter the total number of subjects");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of each subject");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    total=calculate_total(n,marks);
    printf("total marks=%d",total);
}
int calculate_total(int n,int marks[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    return sum;


}
