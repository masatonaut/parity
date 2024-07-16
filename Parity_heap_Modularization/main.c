#include <stdio.h>
#include <stdlib.h>
#include "parity.h"

int main(){
    ParityArray* pa = (ParityArray*)malloc(sizeof(ParityArray));
    int s = 5;
    init(pa, s);
    insert(pa, 1);
    insert(pa, 2);
    insert(pa, 3);
    insert(pa, 4);
    print(pa, s);
    destruct(pa);
    free(pa);
    pa = NULL;
    return 0;
}