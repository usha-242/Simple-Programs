#include<stdio.h>
int leapyear(int);
int main()
{
    int day,month,year;
    printf("enter the day,month and year");
    scanf("%d%d%d",&day,&month,&year);
    if(day<1||day>31 ||month<1 ||month>12 ||year<1)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    day++;
    if((month==4||month==6||month==9||month==11)&&day==31)
    {
        day = 1;
        month++;
    }
    else if (month == 2)
    {
        if((isLeapYear(year)&&day==30)||(!isLeapYear(year)&&day == 29))
        {
            day = 1;
            month++;
        }
    }
    else if (day == 32)
    {
        day = 1;
        month++;
    }
    if(month == 13)
    {
        month = 1;
        year++;
    }
    printf("The next date is: %d/%d/%d\n", day, month, year);
    return 0;
}
int isLeapYear(int year)
{
    if ((year%4==0&&year%100!=0)||(year%400==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



