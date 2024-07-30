#include <stdio.h> 

int main() {
 
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matriz[i][j] == 42){
                int cont7 = 0;

                for(int k = i-1; k <= i+1; k++){
                    for(int h = j-1; h <= j+1; h++){
                        if(matriz[k][h] == 7) cont7++;
                    }
                }

                if(cont7 == 8) {
                    printf("%d %d\n", i+1, j+1);
                    goto FIM;
                }    
            }
        }
    }
    printf("0 0\n");
 
    FIM: return 0;
}