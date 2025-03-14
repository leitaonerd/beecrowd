#include <stdio.h>
#include <math.h>
 
int main() {
int i, n, num1, num2, razao, x, cont = 1; 


    scanf("%d", &n);

    scanf("%d %d", &num1, &num2);
    razao = num2 - num1;
    x = razao;

    scanf("%d", &num1);

    for(i=2; i<n; i++){
        razao = num1 - num2;
        if(razao != x){
            x = razao;
            cont++;
        }
        num2 = num1;
        scanf("%d", &num1);
    }
    
    printf("%d\n", cont);
         
 
    return 0;
}