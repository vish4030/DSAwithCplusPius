// 3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=1; i<2*n; i+=2)
       sum+=i;
     //sum = n*n;         // using formula
     printf("\nsum of first %d odd natural numbers is %d",n,sum); 
}