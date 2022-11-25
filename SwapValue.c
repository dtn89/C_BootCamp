#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * === Simple Swapper ===
 * 
 * Build a program that exchanges two integer values
 * 
 * Goals:
 *  - Implement the swap operation inside a function
 *  - The swap function must exchange the value of two int variables declaresd in main
 * 
 * Tips:
 *  - Use pointer!
 *  - Think carefully about the const keyword 
 *
 */
void swapValue(int *const p1, int *const p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a, b;
    
    printf("Enter a value of a = ");
    scanf("%d", &a);

    printf("Enter a value of b = ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    int *pa = &a;
    int *pb = &b;

    swapValue(pa, pb);

    printf("After swapping: a = %d, b = %d\n", a, b);

    swapValue(&a, &b);

    printf("After second swapping: a = %d, b = %d\n", a, b);

    return EXIT_SUCCESS;
}

