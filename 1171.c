#include <stdio.h>
 
void ler(int x);
void sort(int x);
void count(int x);

int vetor[2001];

int main() {
 
    int n;

    scanf("%d", &n);
    ler(n);
    sort(n);
    count(n);

    return 0;
}

void ler(int x){
    for(int i = 0; i < x; i++){
        scanf("%d", &vetor[i]);
    }
}

void sort(int x){
    for(int i = 0; i < x; i++){
        for(int j = i+1; j < x; j++){
            if(vetor[j] < vetor[i]){
                int temp = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temp;
            }
        }
    }
}

void count(int x){
    int cont = 1;
    int ant = vetor[0];

    for(int i = 1; i <= x; i++){
        int a = vetor[i];
        if(a == ant){
            cont++;
        }
        else{
            printf("%d aparece %d vez(es)\n", ant, cont);
            ant = a;
            cont = 1;
        }
    }
}