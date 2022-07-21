// 18. Write a program which takes the month number as an input and display 
//     number of days in that month

#include<stdio.h>


int main()
{
    int month, days;
    printf("Enter the month number");
    scanf("%d",&month);

    switch(month){

        case 1: days = 31;
                break;
         
        case 2: days = 28;
                break; 

        case 3: days = 31;
                break;  

        case 4: days = 30;
                break;
         
        case 5: days = 31;
                break; 

        case 6: days = 30;
                break; 
        case 7: days = 31;
                break;
         
        case 8: days = 31;
                break; 

        case 9: days = 30;
                break;  

        case 10: days = 31;
                break;
         
        case 11: days = 30;
                break; 

        case 12: days = 31;
                break;           
    } 
    printf("Days in %dth month is %d",month,days);
}