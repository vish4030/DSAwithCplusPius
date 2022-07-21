// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>

int main()
{
   int n, count=0;
   printf("Enter the the number\n");
   scanf("%d",&n);

   while(n>0){
     n =n/10;
     count++;
   }
   if(count == 3)
     printf("given number is a 3-digit number");
   else
     printf("this is not 3-digit number");  
}