#include <stdio.h>
#include <string.h>
 
int main(void) {
 
    int n;
    scanf("%d", &n);

    while(n != 0){
        char palavras[n][51];
        int tm = 0;

        for(int i = 0; i < n; i++){
            scanf("%s", palavras[i]);
            if(strlen(palavras[i]) > tm){
                tm = strlen(palavras[i]);
            } 
        }
        for(int i = 0; i < n; i++){
            int spc = tm - strlen(palavras[i]);
            for(int j = 0; j < spc; j++){
                printf(" ");
            }
            printf("%s\n", palavras[i]);
        }
        scanf("%d", &n);
        if(n != 0) printf("\n");
    }

    return 0;
}