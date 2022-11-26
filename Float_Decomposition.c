#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * === Float Decomposition ===
 * 
 * Build a program that decomposes integer and fractional part of floating point number
 * 
 * Goals:
 *  - Write a function called decompose that receives a floating point number
 *  and return an integer part (int) and fractional part (float)
 *  - Acquire a floating point from the keyboard
 *  - Use the decompose function and print to screen integer and factional part
 *  - Reconstruct the original floating point number and print it
 * 
 * Tips:
 *  - You might need pointers
 *  - Think carefully about the const keyword
 * 
 * 
 */

void FloatDecomposite(float value, float *f_factor, int *i_factor)
{
    *i_factor = (int) value;
    *f_factor = value - *i_factor;
}

int main()
{
    printf("\n\n=== Float Decomposition ===\n\n");

    float inputNumber, float_factor;
    int int_factor;

    float *p_float_factor = &float_factor;
    int *p_int_factor = &int_factor;

    printf("Enter an input number: ");
    scanf("%f", &inputNumber);

    FloatDecomposite(inputNumber, p_float_factor, p_int_factor);

    printf("Float factor = %f\n", float_factor);
    printf("Integer factor = %d\n", int_factor);

    return EXIT_SUCCESS;
}