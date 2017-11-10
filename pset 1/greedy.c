/**
 *    Author:  Maged M. AbdurRahman El-Najaar
 *    CS50 : Problem Set 1 greedy
**/

#include<stdio.h>
#include<cs50.h>
#include<math.h>
int Coins(int coin){
    return coin/25+(coin%25)/10+((coin%25)%10)/5+((coin%25)%10)%5;
}
int main(void)
{

    float number;
    do{
          printf("O hai! How much change is owed?\n");
             number=get_float();
    }while(number<0);

    printf("%d\n",Coins((int)round(number*100)));
}
