#include <stdio.h>
#include <ctype.h>
 
char string[4];

int check();

int main() {
 
    int n, result;

    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%s", string);
        result = check();
        printf("%d\n", result);
    }                    
 
    return 0;
}

int check(){
    if(string[0] == string[2]){
        return((string[0]-48) * (string[2]-48));
    }

    if(string[1] >= 65 && string[1] <= 90){
        return((string[2]-30) - (string[0]-30));
    }

    if(string[1] >= 97 && string[1] <= 122){
        return((string[2]-'0') + (string[0]-'0'));
    }
}