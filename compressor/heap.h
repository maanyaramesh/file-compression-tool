#ifndef HEAP_H
#define HEAP_H

#include "huffman.h"

#define MAX_HEAP_SIZE 256

typedef struct MinHeap
{
    int size;
    Node *nodes[MAX_HEAP_SIZE];

} MinHeap;

MinHeap* create_heap();

void insert_heap(MinHeap *heap, Node *node);

Node* extract_min(MinHeap *heap);

void print_heap(MinHeap *heap);
void sort_heap(MinHeap *heap);

Node* build_huffman_tree(MinHeap *heap);

#endif
