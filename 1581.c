#include <stdio.h>
#include <string.h>
 
int main() {
 
    int casos, npessoas;
    char idioma1[21], idioma2[21];

    scanf("%d", &casos);
    for(int i = 0; i < casos; i++){
        int ingles = 0;
        scanf("%d", &npessoas);
        scanf("%s", idioma1);

        for(int j = 1; j < npessoas; j++){
            scanf("%s", idioma2);
            if(strcmp(idioma1, idioma2) == 1) ingles = 1;
        }

        if(ingles == 1) printf("ingles\n");
        else printf("%s\n", idioma1);
    }
 
    return 0;
}