#include <stdio.h>
#include <math.h>
 
int main() {
 
int i, h, m, qt;
double xi, precis, media, soma, soma2, somatorio;

    while(scanf("%d %d", &h, &m) != EOF){
    soma = 0;
    soma2 = 0;
    qt = h*60/m;
    for(i=1;i<=qt;i++){
        scanf("%lf", &xi);
        soma += xi;
        soma2 += xi * xi;
    }
    media = soma/qt;
    somatorio = soma2 - (2*media*soma) + (qt*media*media);
    precis = sqrt(somatorio/(qt-1));
    printf("%.5lf\n", precis);
    }
 
    return 0;
}