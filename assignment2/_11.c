//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)

#include<stdio.h>

int main()
{
    int num1, digit;

    printf("\nEnter the number and digit-->");
    scanf("%d%d",&num1,&digit);
    num1*=10;
    num1+=digit;
    printf("\nAfter appending digit, the number is  %d",num1); 
}