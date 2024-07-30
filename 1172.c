#include <stdio.h>

int main() {

int vetor[10], temp;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &temp);
        temp = Posi(temp);
        vetor[i] = temp;
    }

    for(int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}

int Posi(int x){
    if(x <= 0)
        x = 1;
    return x;
}