/*The XYZ company provides bonus incentives to its employees based on their gender and basic salary.
 Write a C program that calculates the total salary including bonuses for employees.
 The program should prompt the user to enter the gender ('M' for male and 'F' for female) and the basic salary.
The bonus calculation rules are as follows:
For male employees:
If the basic salary is 10,000 or more, they receive a 50% bonus.
If the basic salary is less than 10,000, they receive a 50% bonus plus an additional 20% bonus.
For female employees:
If the basic salary is 10,000 or more, they receive a 10% bonus.
The program should then display the total salary after adding the bonus.*/
#include<stdio.h>
float t_salary(char,float);
int main()
{
    char gender;
    float salary, total_salary=0;
    printf("enter the gender");
    scanf(" %c",&gender);
    printf("enter the salary");
    scanf("%f",&salary);
    total_salary=t_salary(gender,salary);
    printf("total salary=%.2f",total_salary);
    return 0;
}
float t_salary(char gender,float salary)
{
    float total=salary;
    switch(gender)
    {
    case 'M':
        if(salary<=10000)
        {
            total=total+salary*0.5;
        }
        else if(salary>10000)
        {
            total=total+(salary*0.7);
        }
     break;
    case 'F':
        if(salary>=10000)
        {
            total=total+(salary*0.1);
        }
        else if(salary<10000)
        {
            total=total+(salary*0.5);
        }
        break;
    default:
        printf("INVALID GENDER");
    }
    return total;
}

