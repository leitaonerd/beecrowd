#include <stdio.h>

float xx, yy;

void LePonto(){
    scanf("%f %f", &xx, &yy);
}

int main(){

    float x[2], y[2], coef;

    for(int i = 0; i < 2; i++){
        LePonto();
        x[i] = xx;
        y[i] = yy;
    }

    if(x[1] == x[0]){
        printf("Nao eh possivel determinar o coeficiente angular\n");
        return 0;
    }

    coef = (y[1] - y[0])/(x[1] - x[0]);
    printf("%.2f\n", coef);

    return 0;
}