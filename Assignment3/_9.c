// 9. Write a program to find the greatest among three given numbers. Print number once
//    if the greatest number appears two or three times. 


#include<stdio.h>

int main()
{
   int x,y,z, greater;
   printf("Enter three  numbers\n");
   scanf("%d%d%d",&x,&y,&z);

   if(x>y)
   {
    if(x>z)
      greater = x;
    else
       greater = z;   
   }
   else
   {
    if(y>z)
      greater = y;
    else
      greater = z;  
   }
   printf("%d is greater among all",greater);
}