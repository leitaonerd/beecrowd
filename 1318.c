#include <stdio.h>
 
int main() {
 
    int conv, real, x, on = 1;
    
    while(on != 0){
        scanf("%d %d", &conv, &real);
        if(conv == 0 && real == 0){
            on = 0;
            return 0;
        }

        int vetor[20001] = {0}, intrus = 0;

        for(int i = 1; i <= real; i++){
            scanf("%d", &x);
            vetor[x]++;
        }
        for(int i = 1; i <= real; i++){
            if(vetor[i]>1){
                intrus += 1;
            }
        }
        printf("%d\n", intrus);
    }
    return 0;
}