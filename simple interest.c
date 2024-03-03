#include<stdio.h>
void main()
{
    float simple_interest,principle,rate,time;
    printf("enter the value of principle,time and rate");
    scanf("%f%f%f",&principle,&time,&rate);
    simple_interest=(principle*time*rate)/100;
    printf("simple interest=%.2f",simple_interest);
}
