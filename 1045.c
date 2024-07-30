#include <stdio.h>
 
int main() {
double a, b, c, at1, bt1, ct1, at2, bt2, ct2;

    scanf("%lf %lf %lf\n", &at1, &bt1, &ct1);
    if(at1<bt1){
        at2 = bt1;
        bt2 = at1;
    }
    else if(at1>=bt1){
        at2 = at1;
        bt2 = bt1;
    }
    if(at2<ct1){
        a = ct1;
        ct2 = at2;
    }
    else if(at2>=ct1){
        a = at2;
        ct2 = ct1;
    }
    if(bt2<ct2){
        b = ct2;
        c = bt2;
    }
    else if(bt2>=ct2){
        b = bt2;
        c = ct2;
    }
        
    
    if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else if(a*a==(b*b+c*c))
        printf("TRIANGULO RETANGULO\n");
    else if(a*a>(b*b+c*c))
        printf("TRIANGULO OBTUSANGULO\n");
    else
        printf("TRIANGULO ACUTANGULO\n");

    if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==b || b==c)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}