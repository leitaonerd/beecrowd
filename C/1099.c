#include <stdio.h>
 
int main() {
int n, i, j, x, x1, y, y1, soma;

    scanf("%d\n", &n);
    for(i=1; i<=n; i++){
        scanf("%d %d\n", &x1, &y1);

        /*Sort Simples: y tem q ser maior que x*/
        if(x1>y1){
            x = y1;
            y = x1;
        }
        else{
            x = x1;
            y = y1;
        }

        x++;
        soma = 0;
        
        for(j=x; j<y; j++){
            if((j%2)!= 0){
                soma += j;
            }
        }
        printf("%d\n", soma);
    }
 
    return 0;
}