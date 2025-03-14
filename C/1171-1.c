#include <stdio.h>

typedef struct {
    int numero;
    int vezes;
} num;
 
int main() {
 
    int n, temp;
    num vetor[2001];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        vetor[temp].vezes++;
    }
    return 0;
}