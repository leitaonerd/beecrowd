#include <stdio.h>

float dist(float a, float b, float c, float d){
    float result = (d-b)/(c-a);
    return(result);
}

int main() {

    float x0, y0, x1, y1;

    scanf("%f %f %f %f", &x0, &y0, &x1, &y1);
    float result = dist(x0,y0,x1,y1);
    printf("%.2f\n", result);
    
    return 0;
}