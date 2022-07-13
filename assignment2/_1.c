// 1. Write a program to print unit digit of a given number

#include<stdio.h>
#include<conio.h>

int main(){
    int n, unit;
    printf("\nEnter number--> ");
    scanf("%d",&n);
    unit =  n%10;
    printf("\nUnit place digit is %d",unit);
    return 0;
}