#include <stdio.h>
 
int main() {
 
    int n, c;
    int coloc[7] = {1, 3, 5, 10, 25, 50, 100};

    scanf("%d", &n);
    for(int i = 0; i <= 6; i++){
        if(n <= coloc[i]){
            c = coloc[i];
            break;
        }
    }
    printf("Top %d\n", c);
 
    return 0;
}