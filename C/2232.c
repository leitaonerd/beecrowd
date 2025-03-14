#include <stdio.h>
#include <math.h>
 
int main() {
 
    int t, n;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);

        long long int soma = 0;
        while(n>0){
            soma += pow(2, (n-1));
            n--;
        }
        printf("%lld\n", soma);
    }
 
    return 0;
}