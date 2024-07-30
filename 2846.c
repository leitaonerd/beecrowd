/*#include <stdio.h>
 
int main() {
 
int i, j, n, k, fibonot;
int t1 = 0, t2 = 1;

int next = t1 + t2;

    scanf("%d\n", &n);
    for (i=1; i<=k; i++){
        if((next-t2)>1){
            for(j=1;j<(next-t2)){
                fibonot = t2-1;
                k++;
            }
        }
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    printf("%d\n", fibonot);
    
 
    return 0;
}
*/
#include <stdio.h>

int main() {
int n, fibonot;
int antAnt = 1, anterior = 2, atual = 3;

    scanf("%d", &n);
    while(n>0){
        antAnt = anterior;
        anterior = atual;
        atual = antAnt + anterior;

        n = n - (atual - anterior - 1);
    }
    n = n + (atual - anterior - 1);
    fibonot = anterior + n;

    printf("%d\n", fibonot);
    
    return 0;
}
