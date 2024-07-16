#include <stdio.h>
#include <stdlib.h>
#include "parity.h"

void init(ParityArray* pa, int array_size) {
    pa->arr = (ParityArray*) malloc(array_size * sizeof(ParityArray));
    pa->even_idx = 0;
    pa->odd_idx = array_size-1;
}

void insert(ParityArray* pa, int i) {
    int *buffer = &i;

    if (i % 2 == 0)
    {
    pa->arr[pa->even_idx] = *buffer;
    pa->even_idx++;
    } else
    {
    pa->arr[pa->odd_idx] = *buffer;
    pa->odd_idx--;
    }
}

void print(ParityArray* pa, int size)
{
    for (int i = 0; i < pa->even_idx; i++)
        printf("%d\t", pa->arr[i]);

    for (int i = pa->odd_idx+1; i < size; i++)
        printf("%d\t", pa->arr[i]);
};

void destruct(ParityArray* pa){
    free(pa->arr);
}