#include <stdio.h>
#include <math.h>
 
int main() {
int l, c, r1, r2, on = 1; 
float diag, comp;

    while(on == 1){
        scanf("%d %d %d %d", &l, &c, &r1, &r2);
        if(l == 0 || c == 0 || r1 == 0 || r2 == 0){
            return 0;
        }
        diag = sqrt((l*l)+(c*c));
        comp = r1*sqrt(2)+r1 + r2*sqrt(2)+r2;
        if(diag>comp){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
 
    return 0;
}