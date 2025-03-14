#include <stdio.h>
 
int main() {
 
int x, tipocha, resp, corretos = 0;

    scanf("%d", &tipocha);
    for(x=1; x<=5; x+=1){
        scanf("%d", &resp);
        if(resp == tipocha){
            corretos+=1;
        }
    }
    printf("%d\n", corretos);
 
    return 0;
}