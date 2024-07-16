#ifndef PARITY_H
#define PARITY_H
#define ARRAY_SIZE 10

struct ParityArray
{
    int *arr;
    int even_idx;
    int odd_idx;
};

typedef struct ParityArray ParityArray;

void init(ParityArray* pa, int array_size);
void insert(ParityArray* pa, int i);
void print(ParityArray* pa, int size);
void destruct(ParityArray *pa);

#endif