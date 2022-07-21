// 8. Write a program to check whether a given year is a leap year or not

#include<stdio.h>

int main()
{
   int y;
   printf("Enter the YEAR :");
   scanf("%d",&y);

   if(y%100 == 0){
      if(y%400 == 0)
        printf("YEAR %d is a leap year.",y);
       else
        printf("YEAR %d is NOT a leap year.",y);    
   }
   else if(y%4 == 0)
     printf("YEAR %d is a leap year.",y);
   else
      printf("YEAR %d is NOT a leap year.",y); 
}    