#include <stdio.h>

int main() {
    
    int curupira, boitata, boto, mapinguari, iara, total;

    scanf("%d %d %d %d %d", &curupira, &boitata, &boto, &mapinguari, &iara);
    total = (curupira*300)+(boitata*1500)+(boto*600)+(mapinguari*1000)+(iara*150)+225;
    printf("%d\n", total);

    return 0;
}