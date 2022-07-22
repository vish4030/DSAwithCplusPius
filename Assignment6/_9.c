// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
   int i,m,n;
   printf("Enter two numbers :");
   scanf("%d%d",&m,&n);
   
   if( m%n ==0 || n%m ==0)
   {
     if(m>n)
       printf("LCM of %d, %d is %d",m,n,m);
     else
        printf("LCM of %d, %d is %d",m,n,n); 
   }else
      printf("LCM of %d, %d is %d",m,n,m*n);   
}