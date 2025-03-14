#include <stdio.h>

int n;

int main() {

    int visitados = 0;
    long long int soma = 0;

    scanf("%d", &n);
    int vetor[n], flag[n];

    for(int j = 0; j < n; j++){
        scanf("%d", &vetor[j]);
        flag[j] = 0;
        soma += vetor[j];
    }

    int i = 0;
    while(i>=0 && i < n){
        if(flag[i] == 0){
            flag[i] = 1;
            visitados++;
        }

        if(vetor[i]%2 != 0){
            soma -= 1;
            vetor[i] -= 1;
            i++;
        }
        else if(vetor[i]%2 == 0){
            if(vetor[i]>0){
                soma -= 1;
                vetor[i] -= 1;
            }
            i--;
        }
    }

    printf("%d %lld\n", visitados, soma);
    
    return 0;
}