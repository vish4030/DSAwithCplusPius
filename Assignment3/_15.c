// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
   int n;
   printf("Enter the the number\n");
   scanf("%d",&n);
   
   if(n>0)
    printf("Number is Positive");
   else if(n == 0)
     printf("Number is Zero"); 
   else
     printf("Number is Negative");  
}