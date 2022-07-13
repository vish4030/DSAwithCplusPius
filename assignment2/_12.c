//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.

#include<stdio.h>

int main(){
    float inr, usd;
    printf("\nEnter amount in INR is ");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("\nThe value of INR  %f in USD is $ %f ",inr,usd);
    return 0;
}