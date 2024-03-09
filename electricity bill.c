/*An electricity board charges the following rates for the use of
electricity: for the first 200 units 80 paise per unit: for the next 100
units 90 paise per unit: beyond 300 units Rs 1 per unit. All users are
charged a minimum of Rs. 100 as meter charge. If the total amount is
more than Rs 400, then an additional surcharge of 15% of total amount
is charged. Write a program to read the name of the user, number of
units consumed and print out the charges.*/
#include<stdio.h>
int total_charge(int);
int main()
{
    float sur_charge=0,units,charge,totai_charge=0;
    char name[50];
    printf("enter the units");
    scanf("%f",&units);
    printf("enter the name");
    scanf("%s",&name);
    charge=total_charge(units);
    printf("total charge=%d",charge);
    if(charge>400)
    {
        printf("\ntotal charge is more than 400 so surcharge will addup");
        sur_charge=charge*0.15;
        printf("\nsurcharge=%.2f",sur_charge);
        charge=charge+sur_charge;
    }
    printf("\ntotal charge=%.2f",charge);
    printf("\nname=%s",name);
    printf("\nunits=%.2f",units);
}
int total_charge(int units)
{
    int total=100;
    if(units>0 && units<=200)
    {
        total=units*0.8;
    }
    else if(units>200 && units<=300)
    {
        total=200*0.8+(units-200)*0.9;
    }
    else if(units>300)
    {
        total=200*0.8+100*0.9+(units-300)*1;
    }
    return total;

}


