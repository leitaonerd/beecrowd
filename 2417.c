#include <stdio.h>
 
int main() {
 
int cv, ce, cs, fv, fe, fs, pontc, pontf;

    scanf("%d %d %d %d %d %d\n", &cv, &ce, &cs, &fv, &fe, &fs);
    pontc = 3*cv+ce;
    pontf = 3*fv+fe;

    if(pontc>pontf) {
        printf("C\n");
    }
    else if (pontc<pontf) {
        printf("F\n");
    }
    else if(pontc==pontf){
        if(cs>fs) {
            printf("C\n");
        }
        else if(cs<fs) {
            printf("F\n");
        }
        else if(cs==fs) {
            printf("=\n");
        }
    }
 
    return 0;
}