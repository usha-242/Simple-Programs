#include<stdio.h>
int lower_case(char);
int main()
 {
    char upr;
    printf("enter the uppercase character");
    scanf(" %c",&upr);
    lower_case(upr);
}
int lower_case(char upr)
{
    char lwr;
    if (upr >='A'&&upr<='Z')
    {
        lwr=upr+32;
        printf("lowercase character is %c\n", lwr);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
