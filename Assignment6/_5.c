// 4. Write a program to calculate sum of cube of first N natural numbers


#include<stdio.h>

int main()
{
   int i,n,cube,sum=0;
   printf("Enter the value of N :");
   scanf("%d",&n);
//    for(i=1; i<=n; i++){
//      cube = i*i*i;
//      sum+=cube;
//    }
    sum = (n*(n+1)/2)*(n*(n+1)/2);   // using formula
     printf("\nsum of cube of first %d natural numbers is %d",i,sum); 
}