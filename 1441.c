#include <stdio.h>

int max, cont, n;
int granizo();

int main() {
 
    max = 0;
    cont = 0;

    scanf("%d", &n);
    while(granizo(n) != 1);
    printf("%d\n", max);
 
    return 0;
}

int granizo(){
    if(cont%2 == 0){
        n++;
        cont++;

        return
    }
}