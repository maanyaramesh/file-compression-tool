#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"
#include "huffman.h"

#define MAX_CHARACTERS 256

Node* create_node(char character, int frequency)
{
    Node *new_node = (Node*)malloc(sizeof(Node));

    new_node->character = character;
    new_node->frequency = frequency;

    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void build_frequency_table(const char *filename)
{
    FILE *file = fopen(filename, "r");

    if (!file)
    {
        perror("Error opening file");
        return;
    }

    int frequencies[MAX_CHARACTERS] = {0};

    char character;

    while ((character = fgetc(file)) != EOF)
    {
        frequencies[(unsigned char)character]++;
    }

    printf("\nCharacter Frequencies:\n");
    printf("----------------------\n");

    for (int i = 0; i < MAX_CHARACTERS; i++)
    {
        if (frequencies[i] > 0)
        {
            printf("'%c' : %d\n", i, frequencies[i]);
        }
    }

    fclose(file);
}
void print_codes(Node *root, int code[], int top)
{
    if (root->left)
    {
        code[top] = 0;

        print_codes(root->left, code, top + 1);
    }

    if (root->right)
    {
        code[top] = 1;

        print_codes(root->right, code, top + 1);
    }

    if (!root->left && !root->right)
    {
        printf("%c : ", root->character);

        for (int i = 0; i < top; i++)
        {
            printf("%d", code[i]);
        }

        printf("\n");
    }
}
void huffman_demo(const char *filename)
{
    FILE *file = fopen(filename, "r");

    if (!file)
    {
        perror("Error opening file");

        return;
    }

    int frequencies[MAX_CHARACTERS] = {0};

    char character;

    while ((character = fgetc(file)) != EOF)
    {
        frequencies[(unsigned char)character]++;
    }

    fclose(file);

    MinHeap *heap = create_heap();

    for (int i = 0; i < MAX_CHARACTERS; i++)
    {
        if (frequencies[i] > 0)
        {
            Node *node = create_node(i,
                                     frequencies[i]);

            insert_heap(heap, node);
        }
    }

    printf("\n===== Huffman Heap =====\n");

    print_heap(heap);

    Node *root = build_huffman_tree(heap);

    printf("\n===== Huffman Codes =====\n");

    int code[100];

    print_codes(root, code, 0);
}
