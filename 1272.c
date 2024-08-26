#include <stdio.h>
#include <string.h>
 
int main() {
    
    int n, len;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char string[51] = "", copia[51] = "";
        getchar();
        scanf("%[^\n]s", string);

        len = strlen(string);
        int jaleu = 0, idx = 0;
        for(int j = 0; j < len; j++){
            if(jaleu == 0){
                if(string[j] != ' '){
                    copia[idx] = string[j];
                    idx++;
                    jaleu = 1;
                }
            }
            else if(string[j] == ' '){
                    jaleu = 0;
            }
        }
        copia[idx] = '\0';
        printf("%s\n", copia);
    }
    
 
    return 0;
}