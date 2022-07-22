// 10. Write a program to print a table of N.


#include<stdio.h>

int main()
{
   int i,n;
   printf("Enter the value of N :");
   scanf("%d",&n);
   printf("Table of %d is:",n);
   for(i=1; i<=10; i++)
     printf("\n%d*%d = %d",n,i,n*i); 
}