#include <stdio.h>
 
int main() {
 
    int t, dinheiro, ingred, tpbolo;
    int vetoringred[100];
    int precobolo[100];

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int maxbolo = 0;
        scanf("%d %d %d", &dinheiro, &ingred, &tpbolo);
        for(int j = 0; j < ingred; j++){
            scanf("%d", &vetoringred[j]);
        }
        for(int k = 0; k < tpbolo; k++){
            int temp, idx, qtd, preco = 0;
            scanf("%d", &temp);
            for(int l = 0; l < temp; l++){
                scanf("%d %d", &idx, &qtd);
                preco += (vetoringred[idx]*qtd);
            }
            precobolo[k] = preco;
        }
        for(int m = 0; m < tpbolo; m++){
            if(dinheiro/precobolo[m] > maxbolo){
                maxbolo = dinheiro/precobolo[m];
            }
        }
        printf("%d\n", maxbolo);
    }
 
    return 0;
}