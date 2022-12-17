#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


#define MAX_DIMENSIONS 3

/* Struct Declaration */
struct GuyStruct
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];     // in genenral cannot use incomplete arrays, but .... 
                                    // see flexible array member
};

/* Aliasing the tpe with typedef (anomymous struct)*/
typedef struct
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];
} GuyAnonymous;

typedef struct Guy
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS];
} Guy;

typedef struct Motocycle
{
    char *model;
    double speed;
    Guy owner;
}Motocycle;

double calc_distance(int dimensions, double a[dimensions], double b[dimensions])
{
    double square_distance = 0;
    for (int i = 0; i < dimensions; i++)
    {
        square_distance += pow(a[i] - b[i], 2);
    }
    return sqrt(square_distance);
}

int main()
{
    printf("\n=== Structuring Data ===\n");

    /*Let's calcualte the distance between two guys*/

    /* Implicit initialization */
    Guy elon ={
        "Elon Musk",
        true,
        3,
        {1, 2, 3}
    };

    /* Explicit initialization */
    Guy bill = {
        .name = "Bill Gate",
        .pos = {3, 2, 1},
        .dimensions = 3,
        .active = true,
    };

    Motocycle moto = {
        .model = "Honda",
        .speed = 300,
        .owner = {
            .name = "Andrea",
            .active = true,
            .dimensions =3,
            .pos = { 0, 0, 0}
        },
    };

    /* Copy a whole structure with = */
    Guy anotherGuy = {.name = "someone", .active = false};
    anotherGuy = bill;

    printf("anotherGuy.name = %s\n", anotherGuy.name);

    if(!elon.active || !bill.active)
    {
        printf("%s isn't active!\n", !elon.active ? elon.name : bill.name);
        return EXIT_FAILURE;
    }

    if(elon.dimensions != bill.dimensions)
    {
        printf("%s and %s are in different dimensions!\n", elon.name, bill.name);
        return EXIT_FAILURE;
    }

    printf("\nThe distance between %s and %s is: %.1lf\n", 
        elon.name, bill.name, calc_distance(elon.dimensions, elon.pos, bill.pos));
    
    printf("And %s motorcycle is running at %.1f km/h and is driven by %s\n",
            moto.model, moto.speed, moto.owner.name);


    moto = (Motocycle){.model = "Ducati", .speed = 200};

    printf("And %s motorcycle is running at %.1f km/h and is driven by %s\n",
            moto.model, moto.speed, moto.owner.name);


    printf("\n\n=== TrungNam Dang===\n\n");
}