#include <stdio.h>
 
int main() {
 
    int c1, c2;

    scanf("%d %d", &c1, &c2);

    /*Garantir que C1 seja sempre a maior carta*/
    if(c2>c1){
        c1 = c1 - c2;
        c2 = c1 + c2;
        c1 = c2 - c1;
    }

    printf("%d\n", c1);
 
    return 0;
}