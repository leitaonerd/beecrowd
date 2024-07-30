#include <stdio.h>
 
int main() {
int i, n, a;
a = 1;

    scanf("%d\n", &n);
    for(i=1;i<=n;i++){
        printf("%d %d %d PUM\n", a, a+1, a+2);
        a+=4;
    }
 
    return 0;
}