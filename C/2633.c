#include <stdio.h>
 
typedef struct{
    char corte[21];
    int valid;
}churras;

int main() {
 
    int n, on = 0;
    while(scanf("%d", &n) != EOF){
        if(on != 0) printf("\n");
        churras carne[n];
        for(int i = 0; i < n; i++){
            scanf("%s %d", carne[i].corte, &carne[i].valid);
        }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(carne[i].valid > carne[j].valid){
                    churras temp;
                    temp = carne[j];
                    carne[j] = carne[i];
                    carne[i] = temp;
                }
            }
        }
        for(int i = 0; i < n-1; i++){
            printf("%s ", carne[i].corte);
        }
        printf("%s", carne[n-1].corte);
        on = 1;
    }
 
    return 0;
}