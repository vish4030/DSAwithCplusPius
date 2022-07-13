//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("\nEnter the number-->");
    scanf("%d",&num1);
    num2 = num1/10;
    num2*=10;
    printf("\nNumber with last digit to zero is %d",num2); 
}
