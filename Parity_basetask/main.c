#include <stdio.h>
#define ARRAY_SIZE 10

struct ParityArray
{
    int arr[ARRAY_SIZE];
    int even_idx;
    int odd_idx;
};

typedef struct ParityArray ParityArray;

void init(ParityArray* pa){
    pa->even_idx = 0;
    pa->odd_idx = ARRAY_SIZE-1;
};

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

void print(ParityArray* pa)
{
    for (int i = 0; i < pa->even_idx; i++)
        printf("%d\t", pa->arr[i]);

    for (int i = pa->odd_idx+1; i < ARRAY_SIZE; i++)
        printf("%d\t", pa->arr[i]);
};

int main(){
    ParityArray* pa;

    init(&pa);
    insert(&pa, 1);
    insert(&pa, 2);
    insert(&pa, 3);
    insert(&pa, 4);
    print(&pa);
    
    return 0;
}