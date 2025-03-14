#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            unsigned int pares = 0, impares = 0, somapares = 0, somaimpares = 0;
            char numero[1001];
            scanf("%s", numero);

            for(int j = 0; j < strlen(numero); j++){
                if(j % 2 == 0){
                    pares += (numero[j] - '0');
                }
                else if(j% 2 != 0){
                    impares += (numero[j] - '0');
                }
            }

            while(pares > 0){
                somapares += (pares % 10);
                pares = pares/10;
            }
            while(impares > 0){
                somaimpares += (impares % 10);
                impares = impares/10;
            }

            printf("%u\n", (somapares+somaimpares));
        }
    }

    return 0;
}