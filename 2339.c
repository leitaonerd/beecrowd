#include <stdio.h>

int main() {

    int comp, folhas, cada;

    scanf("%d %d %d", &comp, &folhas, &cada);
    if((comp*cada) > folhas){
        printf("N\n");
    }
    else
        printf("S\n");

    return 0;
}