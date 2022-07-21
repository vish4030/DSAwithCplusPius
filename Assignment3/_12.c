// 12. Write a program to check whether a given alphabet is in uppercase or lowercase

#include<stdio.h>
#include <ctype.h>


int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);

    if(islower(ch) )
      printf("character in LowerCase");
    else
       printf("character in UpperCase");  
}