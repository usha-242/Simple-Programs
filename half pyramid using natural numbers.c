#include<stdio.h>
void print(int);
int main()
{
    int rows;
    printf("enter the rows");
    scanf("%d",&rows);
    print(rows);
}
void print(int rows)
{
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
