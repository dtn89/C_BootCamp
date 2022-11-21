#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * data: 0xABCD
 * 
 * Goal:
 *  - N, M design variables
 *  - make a selector that selects the bits [N:M] include
 *  - print data and result in hexadecimal format, 4 digits wide, zero padding
 *  - check these selection ranges
 *      - [0:3] expecting result 0x000D
 *      - [4:7] expecting result 0x000C
 *      - [8:11] expecting result 0x000B
 *      - [12:15] expecting result 0x000A
 * 
 * 
 */

int main()
{
    printf("\n=== Bit selector ===\n");

    unsigned data = 0xABCD;
    unsigned N = 8;
    unsigned M = 11;

    unsigned W = M - N +1;
    unsigned bitmask = (1 << W) - 1;
    unsigned result = (data >> N) & bitmask;
    printf("data ----> 0x%04X\n", data);
    printf("result ----> 0x%04X\n", result);


    return EXIT_SUCCESS;
}