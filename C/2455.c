#include <stdio.h>

int main() {

int p1, c1, p2, c2, l1, l2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    l1 = p1*c1;
    l2 = p2*c2;

    if(l1>l2){
        printf("-1\n");
    }
    else if(l1<l2){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}