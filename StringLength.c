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

    /* String Copy: strcpy, strncpy */
    char another_string[] = "Programing is funny";
    printf("Before: \"%s\"\n", my_string);

    strcpy(my_string, another_string);  //strcpy did not check the length of dest and source string => could crash the program
    printf("After: \"%s\"\n", my_string);

    char another_long_string[] = "This is a dummy very very long string ...";
    // strncpy(my_string, "Hello", sizeof(my_string));
    printf("Before: \"%s\"\n", my_string);
    printf("After: \"%s\"\n", strncpy(my_string, "Hello", sizeof(my_string)));
    strncpy(my_string, another_long_string, sizeof(my_string));
    my_string[sizeof(my_string)-1] = '\0';  //Assign the last value of my_strigng to NULL value '\0'
    printf("After: \"%s\"\n", my_string);

    printf("\n\n=== TrungNam Dang ===\n\n");
    return EXIT_SUCCESS;
}