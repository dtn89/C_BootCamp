#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

void printfStudents(int students)
{
    printf("Students = %d\n", students);
}

/**
 * @brief 
 * 
 * @param accumulator 
 * @param value 
 * @return int 
 * 
 * if value > 0 => accumative value in accumulator => return 0
 * 
 * else => do nothing => return -1 (FAIL)
 */
int accumulation (int *accumulator, int value)
{
    if (value > 0)
    {
        *accumulator += value;
        return 0;
    }
    else
    {
        return -1;
    }
}

void accumulateWrapper (int *accumulator, int value)
{
    if(accumulation(accumulator, value))
    {
        printf("Warning! Value = %d\n", value);
    }
}

int main()
{
    printf("=== Functions And Pointers ===\n\n");

    int girls = 12, boys = 9;
    int students = sum(girls, boys);
    printfStudents(students);
    
    int class_1 = 28, class_2 = 19, class_3 = -1;

    int accumulator = 0;

    accumulateWrapper(&accumulator, class_1);
    accumulateWrapper(&accumulator, class_2);
    accumulateWrapper(&accumulator, class_3);

    printf("Accumulator = %d\n", accumulator);

    return EXIT_SUCCESS;
}