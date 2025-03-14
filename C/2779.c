#include <stdio.h>
 
int main() {
 
    unsigned int n, m, cont = 0;
    
    scanf("%u", &n);
    scanf("%u", &m);

    unsigned int vetorm[m];

    for(int i = 0; i < m; i++){
        scanf("%u", &vetorm[i]);
    }
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            if(vetorm[i] == vetorm[j] && vetorm[j] != 0){
                vetorm[j] = 0;
            }
        }
    }
    for(int i = 0; i < m; i++){
        if(vetorm[i] != 0){
            cont++;
        }
    }

    printf("%u\n", (n - cont));

    return 0;
}