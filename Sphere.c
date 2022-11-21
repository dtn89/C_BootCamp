#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * === Sphere ===
 * Calculate surface and volume of a sphere
 * 
 * Goals:
 *  - prompt user to enter the radius
 *  - calculate the surface area
 *  - print the radius and the results in decimal format (2 digits of precision)
 *  - print the radius and the results in scientific notation (3 digits of precision)
 *  - check the results
 * 
 */

int main()
{
    printf("\n=== Sphere ===\n");
    const double PI = 3.14159265359;
    double r;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);
    printf("\n");

    double surface = 4 * PI * r *r;
    double voulume = 4.0 / 3 * PI * r * r *r;

    printf("Decimal:\n");
    printf("Radius: %.2lf\n", r);
    printf("Sphere: %.2lf\n", surface);
    printf("Volume: %.2lf\n", voulume);

    printf("Scientific:\n");
    printf("Radius: %.3e\n", r);
    printf("Sphere: %.3e\n", surface);
    printf("Volume: %.3e\n", voulume);    
    printf("\n");

    return EXIT_SUCCESS;
}