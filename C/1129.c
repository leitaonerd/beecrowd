#include <stdio.h>

char corret();

int main() {

    int n, on = 1;

    while(on == 1) {
        scanf("%d", &n);
        if(n == 0){
            on = 0;
            return 0;
        }
        for(int i = 1; i <= n; i++) {
            printf("%c\n", corret());
        }
    }

    return 0;
}

char corret() {
    int vetor[6], preto = 0, idx;
    char padrao[] = "ABCDE";

    for(int j = 0; j<=4; j++){
        scanf("%d", &vetor[j]);
        if(vetor[j] <= 127){
            preto++;
            idx = j;
        }
    }
    if(preto > 1){
        return('*');
    }
    else{
        return(padrao[idx]);
    }
}