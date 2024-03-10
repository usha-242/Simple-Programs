/*Write a C program to calculate the total cost of a meal at a restaurant.
The program should prompt the user to enter the number of items ordered and the price per item.
Then, it should calculate and display the total cost, including a 10% service charge on the total bill if the number of items ordered is more than 3.*/
#include<stdio.h>
int total_cost(int,float[]);
int main()
{
    int n,i;
    printf("enter the number of items");
    scanf("%d",&n);
    float cost[n],total=0;
    printf("enter the cost of each items");
    for(i=0;i<n;i++)
    {
        scanf("%f",&cost[i]);
    }
    total=total_cost(n,cost);
    if(n>3)
    {
        total=total+(total*0.1);
    }
     printf("total cost of a meal=%f",total);

}
int total_cost(int n,float cost[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+cost[i];
    }
    return sum;
}


