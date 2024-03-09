#include<stdio.h>
int grade_marks(int,int[]);
int main()
{

    int n,i, percentage,grade;
    printf("enter the total number of subjects");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of each sub");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);

    }
   percentage=grade_marks(n,marks);
   printf("\npercentage of student=%d", percentage);
   if(percentage>90)
   {
       printf(" S GRADE");
   }
   else if(percentage>80 && percentage<=90)
   {
       printf(" A GRADE");
   }
   else if(percentage>70 && percentage<=80)
   {
       printf(" B GRADE");
   }
   else if(percentage>60 && percentage<=70)
   {
       printf(" C GRADE");
   }
   else if(percentage>50 && percentage<=70)
   {
       printf(" D GRADE");
   }
   else if(percentage>40 && percentage<=50)
   {
       printf(" E GRADE");
   }

}
int grade_marks(int n,int marks[])
{
    int i,per,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("sum of marks=%d",sum);
    per=(sum*100)/(n*100);

}
