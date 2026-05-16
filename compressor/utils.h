#ifndef UTILS_H
#define UTILS_H

long get_file_size(const char *filename);

void print_compression_stats(
    const char *original_file,
    const char *compressed_file
);

#endif
