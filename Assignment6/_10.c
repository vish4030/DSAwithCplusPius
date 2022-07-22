// 10. Write a program to reverse a given number

#include<stdio.h>

int main()
{
   int i,n,digit,rn=0;
   printf("Enter the  number :");
   scanf("%d",&n);
   while (n>0)
   {
      digit = n%10;
      rn = rn*10+digit;
      n/=10;
   }    
     printf("Reverse is %d",rn); 
}