#include <stdio.h>
 
int main() {
int on;    
double n, cont, soma;
cont = 0; on = 1;

    while(on==1){
        if(cont == 2){
            on = 0;
            break;
        }
        scanf("%lf", &n);

        if(n>=0 && n<=10){
            cont++;
            soma += n;
        }
        else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", soma/2.0);
 
    return 0;
    
}