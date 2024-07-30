#include <stdio.h>
#include <string.h>
 
char string[51];

int main() {
 
    int n, size = 0;

    while(scanf("%d", &n) != 0){
        for(int i = 1; i <= n; i++){
            scanf("%s", string);
            if(strlen(*string) > size){
                size = strlen(*string);
            }
        }


    }
 
    return 0;
}