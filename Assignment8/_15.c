/* 14.
    * 
   **
  * *
 *  *
*****
*/


#include<stdio.h>

int main()
{
    int i,j;

    for( i=1; i<=5; i++)
    {
        for( j=1; j<=5; j++)
        {
            if( j>=6-i && ( i==5 || i<=2))
             printf("*");
            else if( j>=6-i ){
              if(j>6-i && j<5)
               printf(" ");
               else
               printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}