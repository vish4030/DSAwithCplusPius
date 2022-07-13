// Write a program to print a given number without its last digit

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int n, num ;
    printf("\nEnter number--> ");
    scanf("%d",&n);
    num = n/10;
    printf("\nnumber without its last digit is  %d",num);
    return 0;

}