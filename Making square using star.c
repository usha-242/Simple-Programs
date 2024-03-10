#include<stdio.h>
void square(int);
int main()
{
    int rows;
    printf("enter the rows");
    scanf("%d",&rows);
    square(rows);
    return 0;
}
void square(int rows)
{
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
