#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief 
 * 
 * === Prime Number ===
 * 
 * Prime number: integer number greater than 1, only divisible by 1 and itself
 * 
 * Goals:
 *  - Find all prime number below a given upper limit
 *  - Find the first prime number above a given lower limit
 *  - Write some dummy cleanup code before the final return (simply print something)
 *  - Define constant MAX equal to 1000
 *  - If user give an upper limit lower than 2 or greater than MAX immediately
 *    execute the clean up code and exit the program
 *  - Same check for the lower limit
 * 
 * Tips:
 *  - How to chek if x is a prime number:
 *      > scan all number from 2 to x
 *      > user the modulo operator to find out if x is prime
 * 
 */

int main()
{
    printf("\n=== Prime Number ===\n");

    const int MAX_NUM = 1000;

    /* Find all prime numbers below upper limit */
    int upperLimit;
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);
    if(upperLimit < 2 || upperLimit > MAX_NUM)
    {
        printf("Error: must be 2 < limit < MAX\n");
        /*  Clean up and exit */
        goto exit_program;
    }

    printf("Prime number up to %d:\n", upperLimit);
    for (int number = 2; number < upperLimit; number++)
    {
        bool isPrime = true;
        /* Algorithm */

        for (int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime)
        {
            printf("%d\n",number);
        }
    }
    
    /* Find the first prime number above lowerlimit */
    int lowerLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    if(lowerLimit < 2 || lowerLimit > MAX_NUM)
    {
        printf("Error: must be 2 < limit < MAX\n");
        /*  Clean up and exit */
        goto exit_program;
    }

    int firstPrimNumber = -1;
    
    /* search */
    for (int number = lowerLimit; number < MAX_NUM; number++)
    {
        bool isPrime = true;
        /* Algorithm */

        for (int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            firstPrimNumber = number;
            break;
        }
    }
    
    
    if(firstPrimNumber == -1)
    {
        printf("Cannot find prime number above %d\n", lowerLimit);
    }
    else
    {
        printf("The first prime number above %d is: %d\n", lowerLimit, firstPrimNumber);
    }

exit_program:
    printf("\n.....................\n");
    printf("Some dummy cleanup code...");
    return EXIT_SUCCESS;
}