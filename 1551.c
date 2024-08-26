#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n, len;
    char frase[1001];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int tmn = 0, alfa[26] = {0};
        getchar();
        scanf("%[^\n]s", frase);
        len = strlen(frase);

        for(int j = 0; j <= len; j++){
            if(frase[j] >= 'a' && frase[j] <= 'z'){
                alfa[frase[j]-'a'] = 1;
            }
        }
        for(int k = 0; k < 26; k++){
            if(alfa[k] > 0) tmn++;
        }
        
        if(tmn == 26) printf("frase completa\n");
        else if(tmn >= 13) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
 
    return 0;
}