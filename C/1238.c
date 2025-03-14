#include <stdio.h>
#include <string.h>

int Max(int a, int b);

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char stringa[51], stringb[51], final[102];
        scanf("%s %s", stringa, stringb);

        int tmnA = strlen(stringa);
        int tmnB = strlen(stringb);
        int maior = Max(tmnA, tmnB);
        int index = 0; 

        for(int j = 0; j < maior; j++){
            if(j < tmnA){
                final[index++] = stringa[j];
            }
            if(j < tmnB){
                final[index++] = stringb[j];
            }
        }

        final[index] = '\0'; 
        printf("%s\n", final);
    }

    return 0;
}

int Max(int a, int b){
    return (a > b) ? a : b;
}
