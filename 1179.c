#include <stdio.h>

int pares[6], impares[6], par = 0, impar = 0, a;
 
int main() {
 
    for(int i = 0; i < 15; i++){
        scanf("%d", &a);
        if(a%2 == 0){
            pares[par] = a;
            par++;
        }
        else if(a%2 == 1 || a%2 == -1){
            impares[impar] = a;
            impar++;
        }

        if(par == 5){
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, pares[j]);
            }
            par = 0;
        }
        if(impar == 5){
            for(int k = 0; k < 5; k++){
                printf("impar[%d] = %d\n", k, impares[k]);
            }
            impar = 0;
        }
    }
    if(impar!=0){
        for(int l = 0; l < impar; l++){
            printf("impar[%d] = %d\n", l, impares[l]);
        }
    }

    if(par!=0){
        for(int h = 0; h < par; h++){
            printf("par[%d] = %d\n", h, pares[h]);
        }
    }

    return 0;
}