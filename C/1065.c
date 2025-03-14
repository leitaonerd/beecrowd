#include <stdio.h>
 
int main() {
int i, numero, cont_par;

    for(i=1; i<=5; i++){
        scanf("%d\n", &numero);
        if (numero%2==0){
            cont_par++;
        }
    }
    printf("%d valores pares\n", cont_par);
    return 0;
}