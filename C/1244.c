#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int tmn;
    char palavra[51];
} Palavra;

int main() {
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        Palavra array[50];
        char string[3000];
        fgets(string, sizeof(string), stdin);

        int idxarray = 0;
        int len = strlen(string);
        int start = 0;

        for (int j = 0; j <= len; j++) {
            if (string[j] == ' ' || string[j] == '\n' || string[j] == '\0') {
                if (start < j) {  
                    int palavralen = j - start;
                    strncpy(array[idxarray].palavra, &string[start], palavralen);
                    array[idxarray].palavra[palavralen] = '\0'; 
                    array[idxarray].tmn = palavralen;
                    idxarray++;
                }
                start = j + 1; 
            }
        }

        for (int j = 0; j < idxarray - 1; j++) {
            for (int k = 0; k < idxarray - j - 1; k++) {
                if (array[k].tmn < array[k + 1].tmn) {
                    Palavra temp = array[k];
                    array[k] = array[k + 1];
                    array[k + 1] = temp;
                }
            }
        }

        for (int j = 0; j < idxarray; j++) {
            if (j > 0) printf(" ");
            printf("%s", array[j].palavra);
        }
        printf("\n");
    }

    return 0;
}
