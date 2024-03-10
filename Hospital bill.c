#include<stdio.h>
float cal_fine(int,char);
void main()
{
    char room;
    int days;
    float fine;
    printf("enter the room and days");
    scanf(" %c%d",&room,&days);
    fine=cal_fine(days,room);
    printf("fine=%f",fine);
}
float cal_fine(int days,char room)
{
    float fine;
    switch(room)
    {
        case 'G':
        if(days<=5)
        {
            fine=days*2000;
        }
        else if(days>=6&&days<=10)
        {
            fine=5*2000+(days-5)*4000;
        }
        else if(days>10)
        {
            fine=5*2000+10*4000+(days-15)*6000;
        }
        break;
    case 'I':
        if(days<=5)
        {
            fine=days*5000;
        }
        else if(days>=6&&days<=10)
        {
            fine=5*5000+(days-5)*8000;
        }
         else if(days>10)
        {
            fine=5*5000+10*8000+(days-15)*10000;
        }
        break;
    }
        return fine;

}


