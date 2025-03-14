#include <stdio.h>
 
double raiz(int a);

int main() {
 
    
    int n;
    scanf("%d", &n);
    printf("%.10lf\n", 1+raiz(n));
 
    return 0;
}

double raiz(int a){
    if(a == 0) return 0;
    else return (1.0/(2.0+raiz(a-1)));
}
