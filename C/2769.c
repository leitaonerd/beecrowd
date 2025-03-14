#include <stdio.h>

int linhas[2][1024], vezes[2][1024], soma[2][1024];
int in[2], out[2];

int n, menor;

int min(int a, int b) {
    if(a < b) return a;
    else return b;
}

int TrocaLinha(int linha, int coluna) {
    if(soma[linha][coluna] != 0) return soma[linha][coluna];
    if(coluna == n) return soma[linha][coluna] = out[linha];
    if(coluna == 0) return soma[linha][coluna] = in[linha] + linhas[linha][coluna] + min(TrocaLinha(linha, coluna+1), vezes[linha][coluna] + TrocaLinha(!linha, coluna+1));   
    if(coluna+1 <= n-1)  return soma[linha][coluna] = linhas[linha][coluna] + min(TrocaLinha(linha, coluna+1), vezes[linha][coluna] + TrocaLinha(!linha, coluna+1));
       
    return soma[linha][coluna] = linhas[linha][coluna] + TrocaLinha(linha, coluna+1);
}
 
int main() {
    while(scanf("%d", &n) != EOF) {
        scanf("%d %d", &in[0], &in[1]);
        for(int j = 0; j < 2; j++) {
            for(int i = 0; i < n; i++) {
                scanf("%d", &linhas[j][i]);
            }
        }
        for(int j = 0; j < 2; j++) {
            for(int i = 0; i < (n-1); i++) {
                scanf("%d", &vezes[j][i]);
            }
        }
        scanf("%d %d", &out[0], &out[1]);
        memset(soma, 0, sizeof(soma));
        menor = min(TrocaLinha(0, 0), TrocaLinha(1, 0));
        printf("%d\n", menor);
    }
    return 0;
}