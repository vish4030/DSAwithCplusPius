// 2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{
   int n, digit=0;
   printf("Enter the the number\n");
   scanf("%d",&n);

    digit = n%10;
    if(digit == 0 || digit == 5)
      printf("Divisible by 5");
    else
     printf("not divisible by 5");  
}