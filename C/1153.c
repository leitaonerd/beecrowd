#include <stdio.h>
 
int fat(int a);

int main() {
 
    int n;
    scanf("%d", &n);
    printf("%d\n", fat(n));
    
    return 0;
}
 
int fat(int a){
    if(a == 1) return 1;
    else return (a * fat(a-1));
}