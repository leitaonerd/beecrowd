#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n, m;
    scanf("%d", &n);
    char palavras[n][101], temp[101];

    for(int i = 0; i < n; i++){
        scanf("%s", palavras[i]);
    }

    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        unsigned int achei = 0, tmn = 0;
        scanf("%s", temp);
        for(int j = 0; j < n; j++){
            if(strstr(palavras[j], temp) != 0){
                achei++;
                if(strlen(palavras[j]) > tmn) tmn = strlen(palavras[j]);
            }
        }
        if(achei == 0) printf("-1\n");
        else printf("%u %u\n", achei, tmn);
    }
 
    return 0;
}