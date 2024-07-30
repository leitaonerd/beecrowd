#include <stdio.h>
 
int main() {
 
int diainicio, horainicio, mininicio, seginicio, diafim, horafim, minfim, segfim;
int inicio, fim, tempo;
int dias, horas, min, sec;

    scanf("Dia %d\n", &diainicio);
    scanf("%d : %d : %d\n", &horainicio, &mininicio, &seginicio);
    scanf("Dia %d\n", &diafim);
    scanf("%d : %d : %d\n", &horafim, &minfim, &segfim);

    inicio = diainicio*(24*60*60)+horainicio*(60*60)+mininicio*60+seginicio;
    fim = diafim*(24*60*60)+horafim*(60*60)+minfim*60+segfim;
    tempo = abs(inicio - fim);

    dias = tempo/(24*60*60);
    horas = tempo%(24*60*60)/(60*60);
    min = tempo%(24*60*60)%(60*60)/60;
    sec = tempo%(24*60*60)%(60*60)%60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, min, sec);

    return 0;
}