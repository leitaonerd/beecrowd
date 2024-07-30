#include <stdio.h>

int main() {

    int testes;

    scanf("%d", &testes);
    for(int i = 1; i <= testes; i++) {
        int r1, r2;
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
    }

    return 0;
}
