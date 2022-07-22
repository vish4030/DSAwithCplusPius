// 6. Write a program to print the first N even natural numbers


#include<stdio.h>

int main()
{
   int i,n;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=2; i<=2*n; i+=2)
     printf("\n%d",i); 
}