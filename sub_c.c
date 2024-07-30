#include <stdio.h>

int pot(int a, int b);

int main(){

    int base, exp, r;

    scanf("%d %d", &base, &exp);
    if(exp < 0){
        printf("Ainda nao lidamos com expoentes negativos.\n");
        return 0;
    }
    else{
        r = pot(base, exp);
        printf("%d\n", r);
    }

    return 0;
}

int pot(int a, int b){
    if(b == 0){
        return 1;
    }

    int result = a;
    for(int i = 2; i<= b; i++){
        result = result*a;
    }
    return(result);
}