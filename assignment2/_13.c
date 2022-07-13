//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.

#include<stdio.h>

int main()
{
     int num, digit;
    printf("\nEnter 3-digit number--> ");
    scanf("%d",&num);

    digit = num%10;
    num/=10;
    num = digit*100+num;
    printf("\nAfter Rotated right by 1 positon, the number is %d ",num);

}