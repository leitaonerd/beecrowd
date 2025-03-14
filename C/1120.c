#include <stdio.h>
#include <string.h>
 
int main() {
    
    char d, n[101];

    while(1){
        scanf(" %c %s", &d, n);
        if(d == '0' && n[0] == '0') break;

        char temp[101];
        int idx = 0, zeroesq = 1;
        for(int i = 0; i < strlen(n); i++){
            if(n[i] != d){
                if(n[i] != '0') {
                    zeroesq = 0;
                }
                if(!zeroesq || n[i] != '0') {
                    temp[idx] = n[i];
                    idx++;
                }
            }
        }
        temp[idx] = '\0';
        int zero = 0;
        for(int i = 0; i < strlen(temp); i++){
            if(temp[i] != '0') zero = 1;
            break;
        }
        if(zero == 0) printf("0\n");
        else printf("%s\n", temp);
    }
 
    return 0;
}