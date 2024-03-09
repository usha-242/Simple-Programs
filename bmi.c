/*Write a C program to calculate Body Mass Index (BMI) and classify it into different categories based on the following ranges:
BMI less than or equal to 15 "Starvation"
BMI greater than 15 but less than 17.5 "Anorexic"
BMI between 17.6 and 18.5: "Underweight"
BMI between 18.6 and 24.9: "Ideal"
BMI between 25 and 25.9: "Overweight"
BMI between 30 and 30.9: "Obese"
BMI greater than 30.9: "Morbidly Obese"
The program should prompt the user to enter their weight (in kilograms) and height (in meters).
Then it should calculate the BMI and display the corresponding category.
*/

#include<stdio.h>
int body_mass_index(float);
void main()
{
    float bmi,wght,hgt;
    printf("enter the weight and height");
    scanf("%f%f",&wght,&hgt);
    bmi=wght/(pow(hgt,2));
    body_mass_index(bmi);
}
int body_mass_index(float bmi)
{
    if(bmi>0&&bmi<=15)
    {
     printf("starvation");
    }
   else if(bmi>=15.1&&bmi<=17.5)
   {
       printf("anorexic");
   }
   else if(bmi>=17.6&&bmi<=18.5)
   {
       printf("underweight");
   }
   else if(bmi>=18.6&&bmi<=24.9)
   {
       printf("ideal");
   }
   else if(bmi>=25&&bmi<=25.9)
   {
       printf("overweight");
   }
   else if(bmi>=30&&bmi<=30.9)
   {
       printf("obese");
   }
   else
   {
     printf("morbidly_obese");
   }

}
