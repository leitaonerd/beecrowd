#include <stdio.h>

int main() {

    float vetor[100], n;
    int menores[100];
    int j = 0;
    int i;

    for(i = 0; i < 100; i++) {
        scanf("%f", &n);
        vetor[i] = n;

        if(n <= 10){
            menores[j] = i;
            j++;
        }
    }

    for(i = 0; i < 100; i++) {
        printf("A[%d] = %.1f\n", menores[i], vetor[menores[i]]);
    }

    return 0;
}