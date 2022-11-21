#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n=== Switch Condition ===\n");
    char operator;
    double operand_a, operand_b, result;

    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter the first operand: ");
    scanf("%lf", &operand_a);
    printf("Enter the second operand: ");
    scanf("%lf", &operand_b);

    int error = 0;

    switch(operator)
    {
        case '+':
            result = operand_a + operand_b;
            break;
        case '-':
            result = operand_a - operand_b;
            break;
        case '*':
            result = operand_a * operand_b;
            break;
        case '/':
            result = operand_a / operand_b;
            break;
        default:
            error = 1;
            break;
    }

    if(!error)
    {
        printf("%.2lf %c %.2lf = %.2lf", operand_a, operator, operand_b, result);
    }
    else
    {
        printf("Warning: wrong operator");
    }

    return EXIT_SUCCESS;
}