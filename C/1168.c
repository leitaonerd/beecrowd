#include <stdio.h>
 
int main() {
    
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char numero[101];
        int soma = 0;
        scanf("%s", numero);

        for(int j = 0; j < strlen(numero); j++){
            if(numero[j] == '0' || numero[j] == '6') soma += 6;
            else if(numero[j] == '1') soma += 2;
            else if(numero[j] == '2' || numero[j] == '3' || numero[j] == '5') soma += 5;
            else if(numero[j] == '4') soma += 4;
            else if(numero[j] == '7') soma += 3;
            else if(numero[j] == '8') soma += 7;
            else if(numero[j] == '9') soma += 6;
        }

        printf("%d leds\n", soma);
    }
 
    return 0;
}