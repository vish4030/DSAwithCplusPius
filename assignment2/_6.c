// 6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>

int main()
{
    char ch;
    printf("\nEnter the character -->");
    scanf("%c", &ch);
    printf("\n ASCII code of ` %c ` is %d",ch, ch);
    return 0;
}