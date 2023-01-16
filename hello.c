#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d  ", 1 + (rand() % 6));
    }
    puts("");
}
