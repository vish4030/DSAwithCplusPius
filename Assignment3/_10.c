// 10. Write a program which takes the cost price and selling price of a product from the
//     user. Now calculate and print profit or loss percentage

#include<stdio.h>

int main()
{
    float cp, sp, profit_per, loss_per;
    printf("\nEnter cost price :" );
    scanf("%d",&cp);
    printf("\nEnter selling price :" );
    scanf("%d",&sp);
    if(sp-cp>0)
    {
    profit_per = ((sp-cp)/cp)*100;
    printf("profit percentage is %.2f%%",profit_per);
    }
    else
    {
    loss_per   =  ((cp-sp)/cp)*100;
    printf("loss percentage is %.2f%%",loss_per);
    }
}