#include <stdio.h>
 
int main() {
 
    int vetor[20], temp;

    for(int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }
    for(int j = 0; j < 10 ; j++) {
        temp = vetor[j];
        vetor[j] = vetor[19-j];
        vetor[19-j] = temp;
    }
    for(int k = 0; k < 20; k++) {
        printf("N[%d] = %d\n", k, vetor[k]);
    }
 
    return 0;
}