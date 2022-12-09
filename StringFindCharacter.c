#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief 
 * 
 * String Searching and Tokenization
 * 
 *  - strchr: Locate first occurrence of character in string
 *  - strstr: Locate substring
 *  - strtok: Split string into tokens
 * 
 *  - Task 1: strchr
 *  Find all the occurrences of charater in a string and print:
 *  "This is a sample string"
 *      ^  ^   ^      ^
 * 
 */

int find_all_occurrences(char str[], char c, int indexes[])
{
    int found = 0;
    char *pstr = str;

    do
    {
        pstr = strchr(pstr, c);
        if(pstr)
        {
            indexes[found++] = pstr++ - str;
        }
    } while (pstr);
    return found;
}

void printf_occurrences(char str[], int occorrences_indexes[], int found)
{
    char pattern[strlen(str)+1];
    memset(pattern, ' ', sizeof(pattern));
    for (int i = 0; i < found; i++)
    {
        pattern[occorrences_indexes[i]] = '^';
    }
    pattern[sizeof(pattern)-1] = '\0';
    printf("%s\n", str);
    printf("%s\n", pattern);
}

int main()
{
    printf("\n=== String Searching and Tokenization ===\n");

    char str[] = "This is a sample string";
    int occurrences_indexes[sizeof(str)];
    int found = find_all_occurrences(str, 's', occurrences_indexes);
    printf_occurrences(str, occurrences_indexes, found);

    printf("\n\n=== TrungNam Dang===\n");
    return EXIT_SUCCESS;
}