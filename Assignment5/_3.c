// 3. Write a program to print the first N natural numbers in reverse order


#include<stdio.h>

int main()
{
   int i,n;
   printf("Enter the value of N :");
   scanf("%d",&n);
   for(i=n; i>0; i--)
     printf("\n%d",i); 
}