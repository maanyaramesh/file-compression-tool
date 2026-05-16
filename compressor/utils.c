#include <stdio.h>

#include "utils.h"

long get_file_size(const char *filename)
{
    FILE *file = fopen(filename, "rb");

    if (!file)
    {
        return -1;
    }

    fseek(file, 0, SEEK_END);

    long size = ftell(file);

    fclose(file);

    return size;
}

void print_compression_stats(
    const char *original_file,
    const char *compressed_file)
{
    long original_size =
        get_file_size(original_file);

    long compressed_size =
        get_file_size(compressed_file);

    if (original_size <= 0 ||
        compressed_size <= 0)
    {
        printf("Error reading file sizes\n");

        return;
    }

    double ratio =
        (1.0 -
        ((double)compressed_size / original_size))
        * 100;

    printf("\n===== Compression Statistics =====\n");

    printf("Original Size   : %ld bytes\n",
           original_size);

    printf("Compressed Size : %ld bytes\n",
           compressed_size);

    printf("Compression Ratio: %.2f%%\n",
           ratio);
}
