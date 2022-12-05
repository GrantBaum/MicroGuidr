//c config
#include <stdio.h>
typedef short int16_t;
static int16_t finPosition;
static int16_t finPositionCommmad;
static int16_t fin1;
static int16_t fin2;
static int16_t fin3;
static int16_t fin4;
//defining the default values
int main(void) {
    finPosition = 0;
    finPositionCommmad = 0;
    fin1 = 0;
    fin2 = 0;
    fin3 = 0;
    fin4 = 0;

    return 0;
}
//setting the fin position to the fin command
void finActiation()
{
    if (finPositionCommmad != finPosition)
    {
        finPosition = finPositionCommmad;
        printf("finPosition updated to: %d\n", finPosition);
    }

}
//making sure if we set the fins to some absurd value that it ignores and doesn't break the rocket
void finProtection()
{
    if (finPositionCommmad > 65)
        finPositionCommmad = 65;
    else
        if (finPositionCommmad < -65)
        finPositionCommmad = -65;

}
//making sure that when using roll, opposite fins work at the same way
void finRollControl()
{
    int16_t fin1;
    int16_t fin2;
    fin1 = fin3;
    fin2 = fin4;

}