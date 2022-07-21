// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if( num%2 == 0 && num%3 == 0 )
       printf("Number divisible by 2 and 3 both.");
    else
       printf("Not divisible  by 2 and 3 both.");   
}