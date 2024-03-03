#include<stdio.h>
void main()
{
    float marks;
    printf("enter the marks obtained");
    scanf("%f",&marks);
    if(marks>=40)
    {
       printf("the student is qualified");
    }
    else
    {
        printf("the student is disqualified");
    }
}
