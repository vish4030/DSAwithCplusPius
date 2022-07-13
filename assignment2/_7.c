// Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main ()
{
     int n, pos=1;
    printf("\nEnter the number--> ");
    scanf("%d",&n);

    while (n>0)
    {
    if( n%2 == 0)
     pos = pos +1;
     n/=2;
    } 

     printf("\nfirst 1 at %dth pos", pos);
}