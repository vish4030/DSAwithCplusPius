// 8. Write a program to check whether the given number is even or odd using a bitwise
//operator

#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter the number -->");
    scanf("%d",&num);

    if( num%2 == 1)
      printf("\n %d is an odd number",num);
    else
     printf("\n %d is an even number",num);   

    return 0; 
}