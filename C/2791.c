#include <stdio.h>

int main() {

int n, result;

    for(int i = 1; i<=4; i++){
        scanf("%d", &n);
        if(n==1){
            result = i;
        }
    }
    printf("%d\n", result);

    return 0;
}