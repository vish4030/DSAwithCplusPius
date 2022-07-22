// Write a program to calculate sum of first N natural numbers


#include<stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
      sum+=i;
    //sum = n*(n+1)/2;                  // using formula
    printf("\nsum of first %d natural is %d",n,sum); 
}