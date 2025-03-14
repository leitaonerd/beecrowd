#include <stdio.h>
 
int main() {
 
    int dias, mov, saldo, saldomenor;

    scanf("%d %d", &dias, &saldo);
    saldomenor = saldo;

    for(int i = 1; i <= dias; i++) {
        scanf("%d", &mov);
        saldo += mov;
        if(saldo < saldomenor){
            saldomenor = saldo;
        }
    }

    printf("%d\n", saldomenor);
 
    return 0;
}