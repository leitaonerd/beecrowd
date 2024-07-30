#include <stdio.h>
 
int main() {
 
    unsigned int n, c, m, cont = 0;
    
    scanf("%u %u %u", &n, &c, &m);
    unsigned int vetorc[c], vetorm[m];

    for(int i = 0; i < c; i++){
        scanf("%u", &vetorc[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%u", &vetorm[i]);
    }

    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            if(vetorm[i] == vetorm[j] && vetorm[i] != 0){
                vetorm[j] = 0;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < c; j++){
            if(vetorc[j] == vetorm[i])
                cont++;
        }
    }

    printf("%u\n", (c - cont));

    return 0;
}