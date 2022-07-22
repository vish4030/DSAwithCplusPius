// 4. Write a program to print the first N odd natural numbers


#include<stdio.h>

int main()
{
   int i,n;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=1; i<=2*n; i+=2)
     printf("\n%d",i); 
}