// 5. Write a program to print the first N odd natural numbers in reverse order.


#include<stdio.h>

int main()
{
   int i,n;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=2*n-1; i>0; i-=2)
     printf("\n%d",i); 
}