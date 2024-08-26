#include <stdio.h>

typedef struct {
    int ascii;
    int qtd;
} elemento;

int main() {
 
    char string[1001];
    int barran = 0;

    while(scanf("%s", string) != EOF){
        if(barran != 0) printf("\n");

        elemento tabela[128] = {0};
        for(int i = 0; string[i] != '\0'; i++){
            tabela[(int)string[i]].qtd++;
            tabela[(int)string[i]].ascii = (int)string[i];
        }

        for(int i = 0; i < 128; i++){
            for(int j = i+1; j < 128; j++){
                if(tabela[j].qtd < tabela[i].qtd){
                    elemento temp;
                    temp = tabela[i];
                    tabela[i] = tabela[j];
                    tabela[j] = temp;
                }
                else if(tabela[j].qtd == tabela[i].qtd){
                    if(tabela[j].ascii > tabela[i].ascii){
                        elemento temp;
                        temp = tabela[i];
                        tabela[i] = tabela[j];
                        tabela[j] = temp;
                    }
                }
            }
        }

        for(int i = 32; i < 128; i++){
            if(tabela[i].qtd != 0) printf("%d %d\n", tabela[i].ascii, tabela[i].qtd);
        }
        barran = 1;
    }
 
    return 0;
}