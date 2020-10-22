#include<stdio.h>

int main()
//variaveis 
{  int x,y;
    while(x<20){
        //incremento e utilização do cálculo “x % 5”
        x++;
        y=x%5;
        if(y==0) {
            printf("%d \n", x);
            }
        else{
            printf(" %d ",x);
            }
    }
}