#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[1000];
    int p;
    int k;
    int m;
} persona;
 
int main() {
 
    int n;
    scanf("%d", &n);
    persona gf[n], godofor;

    for(int i = 0; i < n; i++){
        scanf("%s %d %d %d", gf[i].nome, &gf[i].p, &gf[i].k , &gf[i].m);
    }
    godofor = gf[0];

    for(int i = 1; i < n; i++){
        if(gf[i].p > godofor.p) godofor = gf[i];
        else if(gf[i].p == godofor.p){
            if(gf[i].k > godofor.k) godofor = gf[i];
            else if(gf[i].k == godofor.k){
                if(gf[i].m < godofor.m) godofor = gf[i];
                else if(gf[i].m == godofor.m){
                    if(strcmp(gf[i].nome, godofor.nome) < 0) godofor = gf[i];
                }
            }
        }
        
    }
    printf("%s\n", godofor.nome);
 
    return 0;
}