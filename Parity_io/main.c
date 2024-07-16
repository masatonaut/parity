#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

struct ParityArray
{
    int *arr;
    int even_idx;
    int odd_idx;
};

typedef struct ParityArray ParityArray;

void init(ParityArray* pa, int array_size) {
    pa->arr = (int*)malloc(array_size * sizeof(int));
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

void dump(const char* file_name, ParityArray* pa, int size)
{
    FILE* f;
    f = fopen(file_name, "w");
    fprintf(f, "%d", size);

    if (f != NULL)
    {
        for (int i = 0; i < pa->arr; i++) 
        {
            fprintf(f, "%d\t", pa->arr[i]);
        }
    }
    fclose(f);
    f=NULL;
}

int main(){
    int s;
	printf("Enter the size:\n");
	scanf("%d", &s);

    ParityArray pa;
    init(&pa, s);

	for(int i=0; i<s; i++){
		int val;
		scanf("%d",&val);
		insert(&pa,val);
	}

    print(&pa, s);
    dump("text.txt", &pa, s);
    
    destruct(&pa);
    
    return 0;
}