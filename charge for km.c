/*A car rental company charges its customers based on the number of days and the distance traveled.
Write a C program to calculate the total charges for a customer based on the following rules:
If the number of days of rental is more than 9 and the distance traveled is less than 200 km, the company won't allow the travel.
For rentals up to 3 days and distances up to 300 km, the charge is calculated as Rs. 9.5 per km plus Rs. 350 per day.
For rentals between 4 to 6 days and distances up to 250 km, the charge is calculated as follows:
Rs. 9 per km for the next distance beyond 300 km.
Rs. 300 per day for each additional day beyond 3 days.
For rentals between 7 to 9 days and distances up to 200 km, the charge is calculated as follows:
Rs. 8 per km for the remaining distance beyond 550 km
Rs. 250 per day for each additional day beyond 9 days.
The program should prompt the user to enter the number of days and distance traveled.
Then it should calculate and display the total charges for the customer.
*/
#include<stdio.h>
float charge(int,float);
int main()
{
    int days;
    float total,km;
    printf("enter the days");
    scanf("%d",&days);
    printf("enter the km");
    scanf("%f",&km);
    if(days>9&&km<200)
    {
        printf("Company won't allow to travel");
    }
    total=charge(days,km);
    printf("%f",total);
}
float charge(int days,float km)
{
    float total;
    if(days>0&&days<=3&&km<=300)
    {
        total=(km*9.5)+days*350;
    }
    else if(days>=4&&days<=6&&km<=250)
    {
        total=(300*9.5)+(3*350)+km*9+(days-3)*300;
    }
    else if(days>=7&&days<=9&&km<=200)
    {
        total=(300*9.5)+3*350+(250*9)+(6*300)+(km*8)+(days-9)*250;
    }
    return total;
}
