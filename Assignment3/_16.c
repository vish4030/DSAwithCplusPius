// 16. Write a program to check whether a given character is an alphabet (uppercase), an
//  alphabet (lower case), a digit or a special character.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);

    switch(ch)
    {
        case 65 ... 90:
           printf("%c is UpperCase",ch);
           break;
        case 97 ... 122: 
            printf("%c is LowerCase",ch);
            break;
        case 48 ... 57:
            printf("%c is Digit",ch);
            break;
        default :
            printf("%c is SpecialCharacter",ch);       
    }
}