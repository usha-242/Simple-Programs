/*Write a C program to calculate the total amount to be paid after applying discounts based on the type of purchase.
The program should prompt the user to enter the type of purchase ('T' for toys and 'C' for clothes) and the purchasing amount.
Then it should calculate and display the total amount to be paid after applying the discounts according to the following rules:
For toys ('T'):If the purchasing amount is up to Rs. 1000, no discount is applied.
If the purchasing amount exceeds Rs. 1000, a discount of 30% is applied to the amount exceeding Rs. 1000, with no discount on the first Rs. 1000.
For clothes ('C'):If the purchasing amount is up to Rs. 5000, a discount of 30% is applied.
If the purchasing amount exceeds Rs. 5000, a discount of 30% is applied to the first Rs. 5000,
and a further 15% discount is applied to the amount exceeding Rs. 5000. Display the total amount to be paid after applying the discounts.*/
#include<stdio.h>
float charge(char,float);
int main()
{
    char type;
    float pur_amt,total;
    printf("enter the type and purchasing amount");
    scanf(" %c%f",&type,&pur_amt);
    total=charge(type,pur_amt);
    printf("%f",total);
}
float charge(char type,float pur_amt)
{
    float total;
    switch(type)
    {
   case 'T':
        if(pur_amt>=1&&pur_amt<=1000)
        {
            total=pur_amt;
        }
        else if(pur_amt>1000)
        {
            total=(1000*0)+(pur_amt-1000)*0.7;
        }
        break;
   case 'C':
        if(pur_amt>=0&&pur_amt<=5000)
        {
          total=pur_amt-(pur_amt*0.3);
        }
        else if(pur_amt>5000)
        {
            total=(5000*0.3)+(pur_amt-5000)*0.15;
        }
        break;
    }
    return total;


}

