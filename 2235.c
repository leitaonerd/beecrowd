#include <stdio.h>
 
int main() { 
int A, B, C;

    scanf("%d %d %d\n", &A, &B, &C);
    if(A == B || B == C || C == A){
        printf("S\n");
    }
    else if((A+B==C)||(A+C==B)||(B+C==A)){
        printf("S\n");
    }
    else {
        printf("N\n");
    }
        
    return 0;
}