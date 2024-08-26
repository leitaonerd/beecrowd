#include <stdio.h>
 
typedef struct{
    int qtd;
    char ascii;
} letra;

int main() {
    
    int n;
    char frase[201];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        letra list[27] = {0};
        letra copia[27] = {0};

        getchar();
        scanf("%[^\n]s", frase);
        for(int i = 0; frase[i] != '\0'; i++){
            if(frase[i] >= 'a' && frase[i] <= 'z'){
                list[(int)frase[i] - 'a'].ascii = frase[i];
                list[(int)frase[i] - 'a'].qtd++;
            }
            else if(frase[i] >= 'A' && frase[i] <= 'Z'){
                list[(int)frase[i] - 'A'].ascii = frase[i];
                list[(int)frase[i] - 'A'].qtd++;
            }
        }
        int maior = 0, idx = 0;
        for(int i = 0; i < 27; i++){
            if(list[i].qtd == maior){
                copia[idx] = list[i];
                idx++;
            }
            else if(list[i].qtd > maior){
                for(int i = 0; i < 27; i++){
                    copia[i].qtd = 0;
                    copia[i].ascii = '\0';
                    copia[0] = list[i];
                    idx = 1;
                }
            }
        }
        int k;
        for(k = 0; list[k].qtd != 0; k++){
            frase[k] = copia[k].ascii;
        }
        frase[k] = '\0';
        printf("%s", frase);
    }
    
 
    return 0;
}