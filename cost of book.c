/*Write a program to calculate the total cost of books purchased from a bookstore.
 The program should prompt the user to enter the name of the book, quantity, and price per book for each item purchased.
 Calculate the total cost, including a 5% discount for purchases above Rs. 1000.*/
 #include<stdio.h>
 int total_amt(int,int[]);
 int main()
 {
     char name[50];
     int n,i;
     printf("enter the name of person");
     scanf("%s",&name);
     printf("enter the total books");
     scanf("%d",&n);
     int price[n],total;
     printf("enter the price of each book");
     for(i=0;i<n;i++)
     {
         scanf("%d",&price[i]);
     }
     total=total_amt(n,price);
     printf("\ntotal amount=%d",total);
     if(total>1000)
     {
          total=total-(total*0.5);
     }
     printf("\nname=%s",name);
     printf("\nTotal books=%d",n);
     printf("\nTotal price=%d",total);
}
int total_amt(int n,int price[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+price[i];
    }
    return sum;
}
