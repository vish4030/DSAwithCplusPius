// 5. Write a program to input a three-digit number and display the sum of the digits

#include<stdio.h>
#include<conio.h>

int main(){
    int n, digit, sum=0;
    printf("\nEnter 3-digit number--> ");
    scanf("%d",&n);

    while(n>0)
    {
        digit = n%10;
        sum = sum +digit;
        n/=10;

    }
    printf("\nthe sum of the digits %d",sum);
    return 0;
}