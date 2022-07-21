// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if( num%7 == 0  && num%3 == 0)
       printf("Number divisible by 7 and 3 both.");
    else if( num%7 == 0)
         printf("Number divisible by 7.");  
    else if( num%3 == 0)
         printf("Number divisible by 3.");
    else
       printf("Not divisible.");   
}