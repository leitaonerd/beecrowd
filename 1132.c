#include <stdio.h>
 
int main() {
int a, a1, b, b1, i, soma;
soma = 0;

    scanf("%d\n %d\n", &a1, &b1);
    if(a1>b1){
        a=b1;
        b=a1;
    }
    else{
        a=a1;
        b=b1;
    }


    for(i=a;i<=b;i++){
        if((i%13)!=0){
            soma+=i;
        }
    }
    printf("%d\n", soma);
 
    return 0;
}