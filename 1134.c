#include <stdio.h>
 
int main() {
int on, x, alcool, gas, diesel;
on = 1;

    alcool = 0;
    gas = 0;
    diesel = 0;

    while(on==1){
        scanf("%d\n", &x);
        if(x==4){
            on = 0;
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alcool);
            printf("Gasolina: %d\n", gas);
            printf("Diesel: %d\n", diesel);
        }
        else if(x==1)
            alcool++;
        else if(x==2)
            gas++;
        else if(x==3)
            diesel++;
    }
 
    return 0;
}