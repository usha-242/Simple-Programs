#include<stdio.h>
float price(char,float);
int main()
{
    char type;
    float pur_amt,total;
    printf("enter the type and purchased amt");
    scanf(" %c%f",&type,&pur_amt);
    total=price(type,pur_amt);
    printf("%f",total);
}
float price(char type,float pur_amt)
{
    float total;
    switch(type)
    {
     case 'T':
    if(pur_amt>1&&pur_amt<=1000)
    {
        total=pur_amt;
    }
   else if(pur_amt>1000&&pur_amt<2000)
    {
        total=pur_amt-(pur_amt-1000)*0.7;
    }
    else if(pur_amt>2000)
    {
        total=pur_amt-(pur_amt-2000)*0.9;
    }
    break;
case 'C':
    if(pur_amt>1&&pur_amt<=500)
    {
        total=pur_amt-(pur_amt*0.3);
    }
   else if(pur_amt>500&&pur_amt<=1000)
    {
        total=pur_amt-(pur_amt*0.8);
    }
    else if(pur_amt>1000)
    {
        total=pur_amt-(pur_amt-1000)*0.15;
    }
    break;
case 'A':
    if(pur_amt>1&&pur_amt<=500)
    {
        total=pur_amt;
    }
   else if(pur_amt>500&&pur_amt<=1000)
    {
        total=pur_amt-(pur_amt*0.8);
    }
    else if(pur_amt>1000)
    {
        total=pur_amt-(pur_amt-2000)*0.15;
    }
    break;
default:
        if(pur_amt<0)
    {
        printf("invalid");
        exit(0);
    }
    break;
    }
    return total;



}
