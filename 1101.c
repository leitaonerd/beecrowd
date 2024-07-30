#include <stdio.h>
 
int main() {
int on, m, m1, n, n1, i, soma; 
on = 1;

    while(on==1){
        scanf("%d %d\n", &m1, &n1);
        if(m1<=0 || n1<=0)
            break;
        
        if(m1>n1){
            m = n1;
            n = m1;
        }
        else{
            m = m1;
            n = n1;
        }

        soma = 0;
        for(i=m; i<=n; i++){
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    }
 
    return 0;
}