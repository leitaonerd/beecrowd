#include <stdio.h>
#include <string.h>
 
int main() {

    char senha[101];

    while(gets(senha) != EOF){
        if(senha == EOF) break;

        int maius = 0, minus = 0, num = 0, inv = 0;

        int len = strlen(senha);
        if(len > 5 && len < 33){
            for(int i = 0; i < len; i++){
                if(senha[i] >= '0' && senha[i] <='9') num = 1;
                else if(senha[i] >='a' && senha[i] <= 'z') minus = 1;
                else if(senha[i] >= 'A' && senha[i] <= 'Z') maius = 1;
                else if(senha[i] == ' ') inv = 1;
            }
            if(maius != 1 || minus != 1 || num != 1) printf("Senha invalida.\n");
            else if(inv == 1) printf("Senha invalida.\n");
            else printf("Senha valida.\n");
        }
        else if(len < 6 || len > 32) printf("Senha invalida.\n");
    }
 
    return 0;
}