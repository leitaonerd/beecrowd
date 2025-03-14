#include <stdio.h>

int main() {

    int i, nintervalos, tempo, velmed, distancia = 0;

    scanf("%d", &nintervalos);
    for(i=1; i<=nintervalos; i++) {
        scanf("%d %d", &tempo, &velmed);
        distancia += (tempo * velmed);
    }
    printf("%d\n", distancia);

    return 0;
}