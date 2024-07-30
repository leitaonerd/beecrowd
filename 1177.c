#include <stdio.h>
 
int main() {
 
    int vetor[1000], n;
    
    scanf("%d", &n);
    for(int i = 0; i < 1000; i = i){
        for(int j = 0; j < n; j++){
            vetor[i] = j;
            i++;
        }
    }
    for(int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }


    return 0;
}