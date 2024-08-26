#include <stdio.h>

int main() {
    int linhas, colunas, consultas, tmn_quadrado;

    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];  

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &consultas);
    for(int c = 0; c < consultas; c++){
        int achou = 0;
        scanf("%d", &tmn_quadrado);

        for(int i = 0; i <= linhas - tmn_quadrado; i++){
            for(int j = 0; j <= colunas - tmn_quadrado; j++){
                int achou0sqr = 0;

                for(int k = i; k < i + tmn_quadrado; k++){
                    for(int l = j; l < j + tmn_quadrado; l++){
                        if(matriz[k][l] == 0) {
                            achou0sqr = 1;
                            break;  
                        }
                    }
                    if(achou0sqr) break;  
                }

                if(!achou0sqr){
                    achou = 1;
                    break;  
                }
            }
            if(achou) break;
        }

        if(achou){
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
