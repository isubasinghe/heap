#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main() {
    heap_t *h = new_heap(1);

    for(int i=0; i < 100; i++) {
        heap_insert(h, 0.1+rand()%10 + i, i);
    }

    for(int i=0; i < 100; i++) {
        float min_key = heap_peak_key(h);
        int min = heap_remove_min(h);
        printf("%f\t%d\n", min_key, min);
    }


    free_heap(h);
    return 0;
}