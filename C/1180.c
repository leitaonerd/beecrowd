#include <stdio.h>
 
int main() {
 
    int vetor[1000], n, menor, pos;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    menor = vetor[0];
    pos = 0;

    for(int i = 1; i < n; i++) {
        if(vetor[i] < menor){
            menor = vetor[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
 
    return 0;
}