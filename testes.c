#include <stdio.h>

int main(){

    int n;
    float soma = 0, a;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f", &a);
        soma += a;
    }
    soma = soma/n;
    printf("A media foi %.3fn", soma);

    return 0;
}