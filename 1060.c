#include <stdio.h>
 
int main() {

int i, cont_pos=0;
float numero, soma, media;

    for (i = 1; i <= 6; i++){
    scanf("%f\n", &numero);
        if (numero>0){
            cont_pos++;
            soma += numero;
        }
    }
    media = soma/cont_pos;
    printf("%d valores positivos\n", cont_pos);
    printf("%.1f\n", media);
    

    return 0;
}