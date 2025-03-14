#include <stdio.h>

int main() {
 
    int h;
    while(scanf("%d", &h) != 0){
        if(h == 0) return 0;
        int max = 0;

        while(h>1){
            if(h%2 == 0){
                h = h/2;
            } 
            else if(h%2 != 0){
                h = 3*h + 1;
            } 

            if(h>max){
                max = h;
            }
        }
        printf("%d\n", max);
    }
 
    return 0;
}