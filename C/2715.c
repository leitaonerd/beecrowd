#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while(scanf("%d", &n) != EOF){
        int vetor[n];
        long long int somat = 0, somap = 0, mdif;

        for(int i = 0; i < n; i++){
            scanf("%d", &vetor[i]);
            somat += vetor[i];
        }
        
        mdif = somat;

        for(int i = 0; i < n; i++){
            somap += vetor[i];

            long long int soma_alt = somat - somap;
            long long int dif = llabs(somap - soma_alt);

            if(dif < mdif){
                mdif = dif;
            }
        }
        printf("%lld\n", mdif);
    }
    
    return 0;
}