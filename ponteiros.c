/*1. Procure prever o comportamento do programa abaixo e depois teste o programa e indique qual é 
o valor das variáveis A, B, C, e Z que é escrito na tela – dentro da função e no programa 
principal.

            A       B       C       D
Antes       1       2       3       100
Dentro(i)   1       2       3       100
Dentro(f)   1       2       3       4
Depois      1       2       3       4

 */

/*2. Os valores impressos são corretos? Porque o comportamento observado acontece?*/
/*O fatorial de 100 é impresso de forma errada, uma vez que é um valor muito grande
que não pode ser armazenado em um int, dada sua grandeza de ordem 10^157. 
O valor impresso é 0 pois todos os dígitos menos significativos do fatorial de 100
que cabem em 4 bytes são 0.*/

/*3.  Teste o programa de exemplo abaixo XD*/

/*4. Escreva uma função que receba como parâmetros 3 (três) variáveis do tipo int e retorne o maior 
e o menor valor. As 3 (três) variáveis devem ser lidas na main(), enviadas como parâmetros para a 
função, que deve retornar o maior e o menor valor à main(). Obs: utilize passagem de parâmetros 
por referência (ou seja, ponteiros) para retornar mais de um valor da função*/

/* #include <stdio.h>

void maiormenor(int *a, int *b, int *c);

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    maiormenor(&a, &b, &c);
    printf("%d %d\n", a, c);

    return 0;
}

void maiormenor(int *a, int *b, int *c){
    int temp;

    if(*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if(*a < *b){
       temp = *a;
        *a = *b;
        *b = temp; 
    }

    if(*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
} */

/* 5. Escreva uma função que receba como parâmetros dois números inteiros, a e b, e troque o 
conteúdo das variáveis (a passa a ser b, e vice-versa). Utilize passagem de parâmetro por referência 
para alterar os valor de a e b na main(). Escreva um programa que use essa função em 5 pares de 
números. Teste o programa com os seguintes valores: */