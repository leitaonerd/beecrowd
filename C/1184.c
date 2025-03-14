#include <stdio.h>
 
int main() {
 
    char op[2];
    int a, soma = 0;
    double media;

    scanf("%s", op);
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &a);
            if(i > j) soma += a;
        }
    }
    media = (double)soma/66.0;
    if(op[0] == 'S') printf("%d\n", soma);
    else if (op[0] == 'M') printf("%.1lf\n", media);

    return 0;
}