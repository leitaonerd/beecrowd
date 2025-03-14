#include <stdio.h>
 
int main() {
int senha, tentativa, on;

on = 1;
senha = 2002;

    while(on==1){
        scanf("%d\n", &tentativa);
        if(tentativa != senha){
            printf("Senha Invalida\n");
        }
        else{
            printf("Acesso Permitido\n");
            on = 0;
        }
    }
 
    return 0;
}