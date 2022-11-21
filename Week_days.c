#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * === Days of the week ===
 * Goals:
 * 
 *  - declare an enum that lists all the days of the week
 *  - make sure it has the value 1 on Monday
 *  - print monday and sunday values
 *  - get user input and store as a day enum
 *  - print a string with the name of the day
 * 
 */

typedef enum
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
} WeekDays;

int main()
{
    printf("\n\n=== Day of the week ===\n\n");

    printf("Monday/Sunday: %d/%d\n", MONDAY, SUNDAY);

    WeekDays day;
    printf("Enter a day of a week: ");
    scanf("%u", &day);

    switch(day)
    {
        case MONDAY:
            printf("Day %d is a Moday\n", day);
            break;
        case TUESDAY:
            printf("Day %d is a Tuesday\n", day);
            break;
        case WEDNESDAY:
            printf("Day %d is a Wednesday\n", day);
            break;
        case THURSDAY:
            printf("Day %d is a Thrusday\n", day);
            break;
        case FRIDAY:
            printf("Day %d is a Friday\n", day);
            break;
        case SATURDAY:
            printf("Day %d is a Saturday\n", day);
            break;
        case SUNDAY:
            printf("Day %d is a Sunday\n", day);
            break;
        default:
            printf("Waring: Wrong day\n");
            break;
    }
    return EXIT_SUCCESS;
}