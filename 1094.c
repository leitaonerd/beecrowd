#include <stdio.h>
 
int main() {
int i, n, nmr, coelho, rato, sapo, total;
char tipo;

coelho = 0; rato = 0; sapo = 0; total = 0;

    scanf("%d\n", &n);
    for(i=1;i<=n;i++){
        scanf("%d %c", &nmr, &tipo);
        total += nmr;
        switch (tipo){
            case 'C':
                coelho+=nmr;
            break;

            case 'R':
                rato+=nmr;
            break;

            case 'S':
                sapo+=nmr;
            break;
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    printf("Percentual de coelhos: %.2f %%\n", (coelho*1.0)/total*100);
    printf("Percentual de ratos: %.2f %%\n", (rato*1.0)/total*100);
    printf("Percentual de sapos: %.2f %%\n", (sapo*1.0)/total*100);

    return 0;
}