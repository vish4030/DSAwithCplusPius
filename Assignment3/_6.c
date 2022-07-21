// 6. Write a program to print greater between two numbers. Print one number of 
//    both are the same

#include<stdio.h>

int main()
{
   int m,n;
   printf("Enter two the number :");
   scanf("%d%d",&m,&n);

   if(m == n)
    printf("both are same");
   else if(m>n)
    printf("Greater is %d",m);
   else 
    printf("Greater is %d",n);
}