#include <stdio.h>

int main() {

    int desejado, atual, resultado;

    scanf("%d", &desejado);
    scanf("%d", &atual);

    resultado = desejado - atual;
    printf("%d\n", resultado);

    return 0;
}