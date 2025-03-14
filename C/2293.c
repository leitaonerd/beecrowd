#include <stdio.h>
 
int main() {
 
    int linhas, colunas, max = 0;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        int somatmp = 0;
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
            somatmp += matriz[i][j];
        }
        if(somatmp > max) max = somatmp;
    }
    for(int i = 0; i < colunas; i++){
        int somatmp = 0;
        for(int j = 0; j < linhas; j++){
            somatmp += matriz[j][i];
        }
        if(somatmp > max) max = somatmp;
    }

    printf("%d\n", max);
    

    
    return 0;
}