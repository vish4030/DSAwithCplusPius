//11. Write a program to take marks of 5 subjects from the user. Assume marks are given
//    out of 100 and passing  marks is 33. Now display whether the candidate passed the
//      examination or failed.

#include<stdio.h>

int main()
{
    int h,e,m,s,sc, total;
    printf("Enter the marks of 5 sujects\n");
    scanf("%d%d%d%d%d",&h,&e,&m,&s,&sc);
     
     if( h<33 || e<33 || m<33 || s<33 || sc<33)
        printf("candidate is failed");
     else 
        printf("candidate is passed");   
}