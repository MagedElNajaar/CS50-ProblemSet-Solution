/**
 *    Author:  Maged M. AbdurRahman El-Najaar
 *    CS50 : Problem Set 1 mario less
**/


#include<stdio.h>
#include <cs50.h>
void Pyr(int h){
     int i,j,k,x;
    for(i=0;i<h;i++){

        for(j=h-1;j>i;j--){
   printf(" ");
        }
    for(k=0;k<i+1;k++){
    printf("#");
        }
        printf("  ");

         for(x=0;x<i+1;x++){
    printf("#");
        }
   printf("\n");
    }
}
int main(void){
    int h;
   do
    {
        printf("height: ");
        h = get_int();
    }
    while(h < 0  || h > 23);
    Pyr(h);
}
