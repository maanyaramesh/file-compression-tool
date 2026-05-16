#include <stdio.h>
#include <stdlib.h>
#include "rle.h"

void rle_compress(const char *input_file, const char *output_file)
{
    FILE *input = fopen(input_file, "r");
    FILE *output = fopen(output_file, "w");

    if (!input || !output)
    {
        printf("File error\n");
        return;
    }

    char current, previous;
    int count = 1;

    previous = fgetc(input);

    while ((current = fgetc(input)) != EOF)
    {
        if (current == previous)
        {
            count++;
        }
        else
        {
            fprintf(output, "%d%c", count, previous);
            previous = current;
            count = 1;
        }
    }

    fprintf(output, "%d%c", count, previous);

    fclose(input);
    fclose(output);

    printf("Compression complete\n");
}

void rle_decompress(const char *input_file, const char *output_file)
{
    FILE *input = fopen(input_file, "r");
    FILE *output = fopen(output_file, "w");

    if (!input || !output)
    {
        printf("File error\n");
        return;
    }

    int count;
    char character;

    while (fscanf(input, "%d%c", &count, &character) == 2)
    {
        for (int i = 0; i < count; i++)
        {
            fputc(character, output);
        }
    }

    fclose(input);
    fclose(output);

    printf("Decompression complete\n");
}
