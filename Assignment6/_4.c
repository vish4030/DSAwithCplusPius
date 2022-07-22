// 4. Write a program to calculate sum of squares of first N natural numbers


#include<stdio.h>

int main()
{
   int i,n,sqr,sum=0;
   printf("Enter the value of N :");
   scanf("%d",&n);
  //  for(i=1; i<=n; i++){
  //    sqr = i*i;
  //    sum+=sqr;
  //  }
    sum = n*(n+1)*(2*n+1)/6;      // using formula
     printf("\nsum of squares of first %d natural numbers is %d",i,sum); 
}