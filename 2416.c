#include <stdio.h>

int main() {

    int dist, pista, final;
    
    scanf("%d %d", &dist, &pista);
    final = dist%pista;
    printf("%d\n", final);

    return 0;
}