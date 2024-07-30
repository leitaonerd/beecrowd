#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main() {
    int cont = 0, sum = 0;
    char string[8];

    while(cont < 3){
        gets(string);

        if(strcmp(string, "caw caw") == 0){
            printf("%d\n", sum);
            cont++;
            sum = 0;
        }
        else{
            if(string[0] == '*') sum+=4;
            if(string[1] == '*') sum+=2;
            if(string[2] == '*') sum+=1;
        }
    }
 
    return 0;
}