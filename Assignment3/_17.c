// 17. Write a program which takes the length of the sides of a triangle as an input.
// Display   whether the triangle is valid or not. 

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the 3-side of triangle\n");
    scanf("%d%d%d",&a,&b,&c);

    if( (a+b)>c && (a+c)>b && (b+c)>a)
       printf("Triangle is valid.");
    else
       printf("Triangle is not valid.");   
} 