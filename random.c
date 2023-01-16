#include <stdlib.h>

int randint(int, int);

// Generates a randome integer within the range
// given by the min and max arguments inclusive
int randint(int min, int max) {
    return min + (rand() % (max - min + 1));
}