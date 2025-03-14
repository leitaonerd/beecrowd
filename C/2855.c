#include <stdio.h>
 
int main() {
 
    int nteste, tmnseq;    
    while(scanf("%d", &tmnseq) != EOF){

        int vetor[tmnseq], vcopia[tmnseq];

        for(int i = 0; i < tmnseq; i++){
            scanf("%d", &vetor[i]);
        }

        for(int i = 2; i <= tmnseq; i++){
            int idx = 0;
            int tmnstr = tmnseq;
            for(int j = 0; j < tmnstr; j++){
                if((j+1)%i==0){
                    tmnseq--;
                }
                else{
                    vcopia[idx] = vetor[j];
                    idx++;
                }
            }
            for(int k = 0; k < tmnseq; k++){
                vetor[k] = vcopia[k];
            }
        }

        scanf("%d", &nteste);
        int achou = 0;
        for(int i = 0; i < tmnseq; i++){
            if(vcopia[i] == nteste){
                achou = 1;
                break;
            }
        }
        if(achou == 1){
            printf("Y\n");
        }
        else if(achou == 0){
            printf("N\n");
        }
    }
 
    return 0;
}