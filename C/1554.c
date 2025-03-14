#include <stdio.h>

int main(){

    int c, n, xbranca, ybranca, x, y, menordist, indicemenor;

    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        scanf("%d %d", &xbranca, &ybranca);

        menordist = (1420*1420 + 2840*2840)+1;

        for(int j = 0; j < n; j++){
            scanf("%d %d", &x, &y);
            if(((x-xbranca)*(x-xbranca) + (y-ybranca)*(y-ybranca)) < menordist){
                menordist = ((x-xbranca)*(x-xbranca) + (y-ybranca)*(y-ybranca));
                indicemenor = j+1;
            }
        }
        printf("%d\n", indicemenor);
    }

    return 0;
}