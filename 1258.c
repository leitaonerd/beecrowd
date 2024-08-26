#include <stdio.h>
#include <string.h>

typedef struct {
    char cor[10];
    char tmn;
    char nome[100];
} cliente;

// Comparator function for qsort
int compare(const void *a, const void *b);

int main() {
    int n, um = 0;

    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        if(um != 0) printf("\n");

        cliente pedidos[n];
        getchar();  

        for(int i = 0; i < n; i++) {
            fgets(pedidos[i].nome, sizeof(pedidos[i].nome), stdin);
            pedidos[i].nome[strcspn(pedidos[i].nome, "\n")] = '\0'; // Remove trailing newline
            scanf("%s %c", pedidos[i].cor, &pedidos[i].tmn);
            getchar();  // Consume the newline character left by scanf
        }

        qsort(pedidos, n, sizeof(cliente), compare);

        for(int i = 0; i < n; i++) {
            printf("%s %c %s\n", pedidos[i].cor, pedidos[i].tmn, pedidos[i].nome);
        }
        um = 1;
    }

    return 0;
}

// Comparator function for qsort
int compare(const void *a, const void *b) {
    cliente *p1 = (cliente *)a;
    cliente *p2 = (cliente *)b;

    // Sort by color: "branco" before "vermelho"
    int color_cmp = strcmp(p1->cor, p2->cor);
    if(color_cmp != 0) return color_cmp;

    // If the same color, sort by size: 'G' > 'M' > 'P'
    if(p1->tmn != p2->tmn) {
        return p2->tmn - p1->tmn;   // Sorting based on ASCII values (reversed)
    }

    // If the same color and size, sort by name lexicographically
    return strcmp(p1->nome, p2->nome);
}
