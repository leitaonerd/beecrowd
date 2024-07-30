#include <stdio.h>
#include <math.h>
 
int main() {
int r1, x1, y1, r2, x2, y2, dist_cent;

    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){

        x1 = abs(x1);
        y1 = abs(y1);
        x2 = abs(x2);

        dist_cent = sqrt((abs(x2-x1))*(abs(x2-x1))+(abs(y2-y1))*(abs(y2-y1)));

        if(dist_cent+r2<=r1){
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        }
    }   
 
    return 0;
}