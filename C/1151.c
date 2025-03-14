#include <stdio.h>
 
int array[46];



int fibo(int a);

int main() {
 
    int n;
    array[0] = 0;
    array[1] = 1;

    scanf("%d", &n);
    for(int i = 2; i < n; i++){
        array[i] = array[i-1] + array[i-2];
    }

    for(int i = 0; i < n-1; i++){
        printf("%d ", array[i]);
    }
    printf("%d\n", array[n-1]);
 
    return 0;
}



