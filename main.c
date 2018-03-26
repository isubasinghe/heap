#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void printarray(heap_t *h) {
    for(int i=0; i < h->len; i++) {
        printf("%f ", h->data[i].key);
    }
    printf("\n\n");
}

int main() {
    heap_t *h = new_heap(1);


    heap_insert(h, 0.448161, 128463);
    printarray(h);
    heap_insert(h, 0.403617, 14851);
    printarray(h);
    heap_insert(h, 0.385245, 75257);
    printarray(h);
    heap_insert(h, 0.341822, 79490);
    printarray(h);
    heap_insert(h, 0.341063, 102013);
    printarray(h);
    heap_insert(h, 0.339997, 107443);
    printarray(h);
    heap_insert(h, 0.330630, 123232);
    printarray(h);
    heap_insert(h, 0.333369, 48245);
    printarray(h);
    
    printf("\n\n\n");

    heap_remove_min(h);
    printarray(h);
    heap_remove_min(h);
    printarray(h);
    heap_remove_min(h);
    printarray(h);
    heap_remove_min(h);
    printarray(h);
    heap_remove_min(h);
    printarray(h);
    heap_remove_min(h);
    printarray(h);
    heap_remove_min(h);
    printarray(h);


    free_heap(h);
    return 0;
}