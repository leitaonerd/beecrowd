#include <stdio.h>

int main() {

    int nlinhas, ant, atual, cont = 1;

    scanf("%d", &nlinhas);
    scanf("%d", &ant);
    for(int i=2; i<=nlinhas; i++) {
        scanf("%d", &atual);
        if(atual!=ant) {
            cont++;
        }
        ant = atual;
    }
    printf("%d\n", cont);

    return 0;
}

