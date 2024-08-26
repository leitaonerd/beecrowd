#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n, npessoas;
    char idioma1[21], idioma2[21];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int ingles = 0;
        scanf("%d", &npessoas);
        scanf("%s", idioma1);

        for(int j = 1; j < npessoas; j++){
            scanf("%s", idioma2);
            if(strcmp(idioma1, idioma2) != 0) ingles = 1;
        }

        if(ingles == 1) printf("ingles\n");
        else printf("%s\n", idioma2);
    }
 
    return 0;
}