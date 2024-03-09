/*A shop sells different types of products labeled as 'A', 'K', 'S', 'M', 'O', and 'W'. The prices per unit for each type of product are as follows:
Type 'A': Rs. 25,Type 'K': Rs. 30,Type 'S': Rs. 50,Type 'M': Rs. 45,Type 'O': Rs. 60,Type 'W': Rs. 40
Write a C program that takes as input the quantity and type of a product purchased and calculates the total price.
The program should then display the total price.*/
#include<stdio.h>
float price(float,char);
int main()
{
    float quantity,total;
    char type;
    printf("enter the quantity and type");
    scanf("%f %c",&quantity,&type);
    total=price(quantity,type);
    printf("%f",total);
}
 float price(float quantity,char type)
{
    float total;

if(type=='A')
{
    total=25*quantity;
}
else if(type=='K')
{
    total=30*quantity;
}
else if(type=='S')
{
    total=50*quantity;
}
else if(type=='M')
{
    total=45*quantity;
}
else if(type=='O')
{
    total=60*quantity;
}
else if(type=='W')
{
    total=40*quantity;
}
return total;
}
