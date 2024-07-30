#include <stdio.h>

float ideal(float alt, char sexo);

int main(){

    int n;
    float alt;
    char sexo;

    scanf("%d", &n);
    for(int i = 1; i<=n; i++) {
        scanf("%f %c", &alt, &sexo);
        printf("Peso ideal: %.2f\n", ideal(alt, sexo));
    }

    return 0;
}

float ideal(float alt, char sexo){

    if(sexo == 'M' || sexo == 'm'){
        return (23 * (alt*alt));
    }
    else if(sexo == 'F' || sexo == 'f'){
        return(20 * (alt*alt));
    }
}
