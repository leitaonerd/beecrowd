#include <stdio.h>
 
int main() {
int a, b, i, j, iterations, div; 


    scanf("%d", &iterations);
    for(i=1; i<=iterations; i++){
        scanf("%d %d", &a, &b);
        for(j=1; j<=a || j<=b; j++){
            if(a%j == 0 && b%j == 0){
                div = j;
            }
        }
        printf("%d\n", div);
    }
 
    return 0;
}