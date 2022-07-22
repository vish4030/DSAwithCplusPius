// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
   int i,n,count=0;
   printf("Enter the  number :");
   scanf("%d",&n);
   
   for(i=2; i<n; i++){
      if(n%i == 0 )
        count+=1;
   }
     
   if(count >0 || n == 1)
     printf("%d is NOT a Prime number",n);
   else
     printf("%d is a Prime number",n);    
}