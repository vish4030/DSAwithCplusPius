// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=2; i<=2*n; i+=2)
       sum+=i;
     //sum = n*(n+1);
     printf("\nsum of first %d even natural numbers is %d",n,sum); 
}