#ifndef HUFFMAN_H
#define HUFFMAN_H

typedef struct Node
{
    char character;
    int frequency;

    struct Node *left;
    struct Node *right;

} Node;

Node* create_node(char character, int frequency);

void build_frequency_table(const char *filename);

void huffman_demo(const char *filename);

void print_codes(Node *root, int code[], int top);

#endif
