#include <stdio.h>
 
int main() {
 
int inicio, fim, duracao;

    scanf("%d %d\n", &inicio, &fim);
    if ((fim - inicio)>0) {
        duracao = fim - inicio;
    }
    else if ((fim - inicio)<0) {
        duracao  = (24 - inicio)+fim;
    }
    else if ((fim - inicio)==0) {
        duracao = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}