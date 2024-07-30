#include <stdio.h>

int main() {

    int nota;
    scanf("%d", &nota);
    if(nota>85)
        printf("A\n");
    else if(nota>60)
        printf("B\n");
    else if(nota>35)
        printf("C\n");
    else if(nota>0)
        printf("D\n");
    else
        printf("E\n");

    return 0;
}