#include <stdio.h>
 
int main() {
int d;

    scanf("%d\n", &d);
    if(d<=800) {
        printf("1\n");
    }
    else if(800<d && d<=1400){
        printf("2\n");
    }
    else {
        printf("3\n");
    }    
    return 0;
}