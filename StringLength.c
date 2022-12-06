#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n=== String Length, Copy, Copare ===\n\n");

    char my_string[] = "I love programming in C!";
    printf("The string: \"%s\"\n", my_string);

    /* String Length */
    int i;
    for (i = 0; my_string[i] != '\0'; i++);
    
    printf("String length (from scratch): %d\n", i);
    printf("Sizeof string: %lld\n", sizeof(my_string));

    /* String length: Build In Method */
    printf("String length (built in): %lld\n", strlen(my_string));

    printf("\n\n=== TrungNam Dang ===\n\n");
    return EXIT_SUCCESS;
}