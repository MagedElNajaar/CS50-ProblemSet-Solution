/**
 *    Author:  Maged M. AbdurRahman El-Najaar
 *    CS50 : Problem Set 1 water
**/

#include<stdio.h>
#include<cs50.h>

int shower(int mint){

    int bottles;
    bottles=((1.5*128)/16)*mint;
    return bottles;

}

int main(void){

    printf("minutes: ");
    int mint=GetInt();
    printf("bottles: %d\n", shower(mint));
}
