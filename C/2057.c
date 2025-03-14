#include <stdio.h>
 
int main() {
 
int part, dur, fuso, final;

    scanf("%d %d %d", &part, &dur, &fuso);
    final = part+dur+fuso;
    if(final>=24)
        final -=24;
    if(final<0)
        final +=24;
    printf("%d\n", final);
 
    return 0;
}