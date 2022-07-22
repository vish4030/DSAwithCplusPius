// Write a program to count digits in a given number


#include<stdio.h>

int main()
{
   int i,n,count=0;
   printf("Enter the  number :");
   scanf("%d",&n);
   while (n>0)
   {
      count+=1;
      n/=10;
   }    
     printf("digits in a given number is %d",count); 
}