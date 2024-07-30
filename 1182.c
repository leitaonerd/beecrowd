#include <stdio.h>
#include <string.h>
 
int main() {
    
    char op[2];
    float matriz[12][12], soma = 0, media;

    scanf("%s", op);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
            if(j>i){
                soma += matriz[i][j];
            }
        }
    }

    if(strcmp(op, "S") == 0){
        printf("%.1f\n", soma);
    }
    else if(strcmp(op, "M") == 0){
        media = soma/66;
        printf("%.1f\n", media);
    }

    return 0;
}