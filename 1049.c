#include <stdio.h>
#include <string.h> 
 
int main() {
char vert[12], classe[10], alim[10];

    scanf("%s\n %s\n %s\n", vert, classe, alim);

    if (strcmp(vert, "vertebrado") == 0) {
        if (strcmp(classe, "ave") == 0) {
            if (strcmp(alim, "carnivoro") == 0) {
                printf("aguia\n");
            }
            else {
                printf("pomba\n");
            }
        }
        else {
            if(strcmp(alim, "onivoro") == 0)
                printf("homem\n");
            else{
                printf("vaca\n");
            }
        }
    }
    else {
        if(strcmp(classe, "inseto") == 0) {
            if(strcmp(alim, "hematofago") == 0)
                printf("pulga\n");
            else{
                printf("lagarta\n");
            }
        }
        else {
            if(strcmp(alim, "hematofago") == 0)
                printf("sanguessuga\n");
            else{
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}