#include <stdio.h>
 
int main() {
int i, numero, cont_par, cont_imp, cont_pos, cont_neg;
cont_par=0; cont_imp=0; cont_pos=0; cont_neg=0;

    for(i=1; i<=5; i++){
        scanf("%d\n", &numero);
        if (numero%2==0){
            cont_par++;
        }
        else{
            cont_imp++;
        }

        if(numero>0){
            cont_pos++;
        }
        else if(numero<0){
            cont_neg++;
        }
    }
    printf("%d valor(es) par(es)\n", cont_par);
    printf("%d valor(es) impar(es)\n", cont_imp);
    printf("%d valor(es) positivo(s)\n", cont_pos);
    printf("%d valor(es) negativo(s)\n", cont_neg);

    return 0;
}