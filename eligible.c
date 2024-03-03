#include<stdio.h>
void main()
{
    float marks,attendence;
    printf("enter the marks and attendence");
    scanf("%f%f",&marks,&attendence);

    if(marks>40&&attendence>85)
    {
        printf("you are eligible to esa");
    }
    else
        printf("you are not eligible to esa");
}
