#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int n, m, ia, ja, ip, jp, dist;
    while(scanf("%d %d", &n, &m) != EOF){
        int matriz[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &matriz[i][j]);
                if(matriz[i][j] == 2){
                    ia = i;
                    ja = j;
                }
                else if(matriz[i][j] == 1){
                    ip = i;
                    jp = j;
                }
            }
        }
        dist = (abs(ip - ia) + abs(jp - ja));
        printf("%d\n", dist);
    }
 
    return 0;
}