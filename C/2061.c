#include <stdio.h>
#include <string.h>

int main() {

    int abas, acoes; 
    char string[7];  

    scanf("%d %d", &abas, &acoes);
    for(int i = 1; i <= acoes; i++) {
        scanf("%s", string);
        if(strcmp(string, "fechou") == 0){
            abas++;
        }
        else if(strcmp(string, "clicou") == 0){
            abas--;
        }
    }
    printf("%d\n", abas);

    return 0;
}