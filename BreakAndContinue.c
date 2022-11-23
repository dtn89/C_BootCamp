#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n=== Accumulation ===\n\n");

    int userInput, accumulationResult;
    const int MAX_ITER = 5;

    for (int i = 0; i < MAX_ITER; i++)
    {
        printf("Please enter a number to accumulate (-1 to exit): ");
        scanf("%d", &userInput);
        if(userInput == -1)
        {
            //break;
            continue;
        }
        else
        {
            accumulationResult += userInput;
        }
    }
    
    printf("Accumualtion result value is: %d\n", accumulationResult);
    

    return EXIT_SUCCESS;
}