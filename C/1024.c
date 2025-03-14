#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    

    for(int i = 0; i < n; i++){
        char linha[1001];
        getchar();
        scanf("%[^\n]s", linha);
        linha[strlen(linha)] = '\0';

        int tmn = strlen(linha);
        for(int j = 0; j < tmn; j++){
            if((linha[j] >= 'A' && linha[j <= 'Z']) || (linha[j] >= 'a' && linha[j] <= 'z')){
                linha[j] += 3;
            } 
        }

        char temp[tmn+1];
        for(int j = 0, k = tmn-1; k >= 0; j++, k--){
            temp[j] = linha[k];
        }
        for(int j = 0; j < tmn; j++){
            linha[j] = temp[j];
        }

        for(int j = tmn/2; j < tmn; j++){
            linha[j] -= 1;
        }

        printf("%s\n", linha);
    }
 
    return 0;
}