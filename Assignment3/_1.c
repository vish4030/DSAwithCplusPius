//1. Write a program to check whether a given number is positive or non-positive
#include<stdio.h>

int main()
{
   int n;
   printf("Enter the the number\n");
   scanf("%d",&n);
   
   if(n>0)
    printf("Number is positive");
   else
     printf("Number is Non-positive"); 
}