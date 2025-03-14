#include <stdio.h>
 
int main() {
 
    int n, x, passou; 

     while(scanf("%d", &n) != 0){
        if(n == 0) break;
        int matriz[n][n];

        for(int i = 0; i < n; i++){
            x = i + 1;
            passou = 0;
            for(int j = 0; j < n; j++){
                if(x == 1) passou = 1;
                if(passou == 0){
                    matriz[j][i] = x;
                    x--;
                }
                else if(passou == 1){
                    matriz[j][i] = x;
                    x++;
                }
            }
        }

        for(int i = 0; i < n; i++){
            int j;
            for(j = 0; j < n-1; j++){
                if(matriz[i][j]<10){
                    printf("  ");
                } 
                else if(matriz[i][j]<100){
                    printf(" ");
                }
                printf("%d ", matriz[i][j]);
            }
            if(matriz[i][j]<10){
                printf("  ");
            } 
            else if(matriz[i][j]<100){
                printf(" ");
            }
            printf("%d\n", matriz[i][j]);
        }
        printf("\n");
     }
 
    return 0;
}