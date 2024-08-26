#include <stdio.h>

int main() {
 
    int n;
    char placa[101];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a = 0;
        scanf("%s", placa);

        if(placa[0] < 'A' || placa[0] > 'Z') a = -1;
        else if(placa[1] < 'A' || placa[1] > 'Z') a = -1;
        else if(placa[2] < 'A' || placa[2] > 'Z') a = -1;
        else if(placa[3] != '-' ) a = -1;
        else if(placa[4] < '0' || placa[4] > '9') a = -1;
        else if(placa[5] < '0' || placa[5] > '9') a = -1;
        else if(placa[6] < '0' || placa[6] > '9') a = -1;
        else if(placa[7] < '0' || placa[7] > '9') a = -1;
        else if(placa[8] != '\0') a = -1;
        else if(placa[7] == '1' || placa[7] == '2') a = 2;
        else if(placa[7] == '3' || placa[7] == '4') a = 3;
        else if(placa[7] == '5' || placa[7] == '6') a = 4;
        else if(placa[7] == '7' || placa[7] == '8') a = 5;
        else if(placa[7] == '9' || placa[7] == '0') a = 6;

        if(a == 2) printf("MONDAY\n");
        else if(a == 3) printf("TUESDAY\n");
        else if(a == 4) printf("WEDNESDAY\n");
        else if(a == 5) printf("THURSDAY\n");
        else if(a == 6) printf("FRIDAY\n");
        else if(a == -1) printf("FAILURE\n");
    }
 
    return 0;
}