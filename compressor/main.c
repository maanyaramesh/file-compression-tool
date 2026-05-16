#include <stdio.h>
#include <string.h>
#include "rle.h"

int main(int argc, char *argv[])
{
    if (argc != 5)
    {
        printf("Usage:\n");
        printf("./compressor [compress/decompress] [rle] input output\n");
        return 1;
    }

    char *operation = argv[1];
    char *algorithm = argv[2];

    if (strcmp(operation, "compress") == 0 &&
        strcmp(algorithm, "rle") == 0)
    {
        rle_compress(argv[3], argv[4]);
    }
    else if (strcmp(operation, "decompress") == 0 &&
             strcmp(algorithm, "rle") == 0)
    {
        rle_decompress(argv[3], argv[4]);
    }
    else
    {
        printf("Invalid command\n");
    }

    return 0;
}
