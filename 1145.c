#include <stdio.h>
 
int main() {
int i, x, y;
int cont = 0;

    scanf("%d %d", &x, &y);
    for(i=1;i<=y;i++){
        printf("%d", i);
        cont++;

        if(cont==x){
            printf("\n");
            cont = 0;
        }
        else
            printf(" ");
    }
    if(cont != 0)
        printf("\n");
 
    return 0;
}