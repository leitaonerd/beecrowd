#include <stdio.h>
 
int main() {
 
    int produtos, item, qtd;
    float total = 0, preco;

    scanf("%d", &produtos);
    for(int i = 1; i <= produtos; i++) {
        scanf("%d %d", &item, &qtd);
        preco = (item % 10) + 0.5;
        total += preco * qtd;
        
    }
    printf("%.2f\n", total);


    return 0;
}