#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "rle.h"
#include "huffman.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage:\n");

        printf("./compressor compress rle input output\n");

        printf("./compressor huffman input\n");

        return 1;
    }

    char *operation = argv[1];

    if (strcmp(operation, "compress") == 0)
    {
        if (strcmp(argv[2], "rle") == 0)
        {
            rle_compress(argv[3], argv[4]);
            print_compression_stats(argv[3], argv[4]);
        }
    }

    else if (strcmp(operation, "decompress") == 0)
    {
        if (strcmp(argv[2], "rle") == 0)
        {
            rle_decompress(argv[3], argv[4]);
        }
    }

    else if (strcmp(operation, "huffman") == 0)
    {
        huffman_demo(argv[2]);
    }

    else
    {
        printf("Invalid command\n");
    }

    return 0;
}
