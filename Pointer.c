#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf("\n\n=== Pointer ===\n\n");

    char a = 'A';
    char *ptr = &a;

    printf("1 | %c, %c, %llu\n", a, *ptr, (uint64_t) ptr);

    char b = 'B';
    ptr = &b;

    printf("2 | %c, %c, %llu\n", b, *ptr, (uint64_t) ptr);

    *ptr = 'C';
    printf("3 | %c, %c, %llu\n", b, *ptr, (uint64_t) ptr);

    (*ptr)++;
    printf("4 | %c, %c, %llu\n", b, *ptr, (uint64_t) ptr);

    unsigned x = 'A';
    ptr = (char *)&x;
    printf("5 | %u, %c, %llu\n", x, *ptr, (uint64_t) &x);

    return EXIT_SUCCESS;
}