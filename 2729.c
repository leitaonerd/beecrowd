#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char palavras[1002][21] = {0}, linha[20001] = {0}, temp[21] = {0};
        getchar();
        gets(linha);

        int idxpal = 0, idxletra = 0, brk = 0;
        for(int j = 0; linha[j] != '\n'; j++){
            if(linha[j] == ' '){
                temp[idxletra] = '\0';

                for(int k = 0; k <= idxpal; k++){
                    if(strcmp(temp, palavras[k]) == 0){
                        idxletra = 0;
                        brk = 1;
                        break;
                    }
                }
                
                if(brk == 0){
                    strcpy(palavras[idxpal], temp);
                    idxletra = 0;
                    idxpal++;
                }
                brk = 0;
            } 

            else{
                temp[idxletra] = linha[j];
                idxletra++;
            }
        }

        for(int j = 0; j < idxpal; j++){
            printf("%s ", palavras[j]);
        }
        printf("%s\n", palavras[idxpal]);
    }
 
    return 0;
}