#include <stdio.h>

void main(void){
    int i = 4;

    int *pi = &i;
    int *pc = &i;

    printf("%i, %i, %i\n", i, *pi, *pc);
}