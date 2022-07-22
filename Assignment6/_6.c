// Write a program to calculate factorial of a number

#include<stdio.h>

int main()
{
   int i,n, fac=1;
   printf("Enter the  number :");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
       fac = fac*i;
     printf("\nfactorial of a number is %d",fac); 
}