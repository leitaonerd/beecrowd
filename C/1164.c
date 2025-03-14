#include <stdio.h>
 
int main() {
int i, j, soma, x, n;

    scanf("%d\n", &x);
    for(i=1;i<=x;i++){
        soma = 0;
        scanf("%d\n", &n);
        for(j=1;j<n;j++){
            if((n%j)==0)
                soma = soma+j;
        }
        if(soma==n)
            printf("%d eh perfeito\n", n);
        else
            printf("%d nao eh perfeito\n", n);
    }
 
    return 0;
}   