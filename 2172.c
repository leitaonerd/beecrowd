#include <stdio.h>
 
int main() {
 
    int boost, on = 1;
    long long int xp, result;
    
    while(on == 1){
        scanf("%d %d", &boost, &xp);
        if(boost != 0 && xp != 0) {
            result = boost * xp;
            printf("%d\n", result);
        }
        else{
            on = 0;
        }
    }
    return 0;
}