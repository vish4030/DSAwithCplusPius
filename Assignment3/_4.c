// Write a program to check whether a given number is an even number or an odd
// number without using % operator

#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter the number -->");
    scanf("%d",&num);

    if( num%2 == 1)
      printf("%d is an odd number",num);
    else
     printf("%d is an even number",num);   

    return 0; 
}