#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    char string[50], string2[50] = {'\0'};

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", string);
        int k = 0, spc = 0;
        for(unsigned int j = 0; j < strlen(string); j++){
            if(string[j] != 32 && string[j] != 0){
                if(spc == 0){
                    string2[k] = string[j];
                    spc = 1;
                    k++;
                }
                else{
                    spc = 0;
                }
            }
            else if(string[j] == 32 || string[j] == 0){
                spc = 0;
            }
        }
        string2[k+1] = '\0';
        printf("%s\n", string2);
    }
 
    return 0;
}