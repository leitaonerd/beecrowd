#include <stdio.h>

int main() {

    int n, vetor[10];

    scanf("%d", &n);
    for(int i = 0; i < 10; i++) {
        vetor[i] = n;
        n *= 2;
    }

    for(int j = 0; j < 10; j++) {
        printf("N[%d] = %d\n", j, vetor[j]);
    }

    return 0;
}