#include <stdio.h>
 
int main() {
 
    int c, n1, n2, a;
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%d %d", &n1, &n2);
        a = n1;

        for(int a = n1; a <= n2; a++){
            printf("%d", a);
        }
        for(int a = n2; a >=n1; a--){
            if(a < 10){
                printf("%d", a);
            }
            else if(a < 100){
                printf("%d", (a%10));
                printf("%d", (a/10));
            }
            else if(a < 1000){
                int x = a;
                int idx = 3;
                while(idx > 0){
                printf("%d", (x%10));
                x = x/10;
                idx--;
                }
            }
            else if(a < 10000){
                int x = a;
                int idx = 4;
                while(idx > 0){
                printf("%d", (x%10));
                x = x/10;
                idx--;
                }
            }
            else{
                int x = a;
                int idx = 5;
                while(idx > 0){
                printf("%d", (x%10));
                x = x/10;
                idx--;
                }
            }
        } 
        printf("\n");
    }
    
    return 0;
}