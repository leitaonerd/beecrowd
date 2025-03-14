#include <stdio.h>
 
int main() {
int i, on, n;
on = 1;

    while(on==1){
        scanf("%d\n", &n);
        if(n==0)
            return 0;
        else{
            for(i=1;i<=n;i++){
                if(i<n)
                    printf("%d ", i);
                else if(i==n)
                    printf("%d\n", i);
            }
        } 
    }
 
    return 0;
}