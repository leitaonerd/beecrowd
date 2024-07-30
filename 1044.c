#include <stdio.h>
 
int main() {
 
int a, b;
    scanf("%d %d\n", &a, &b);
    if (a%b==0 || b%a==0) {
        printf("Sao multiplos");
    }
    else {
    printf("Nao sao multiplos");
    }
    return 0;
}