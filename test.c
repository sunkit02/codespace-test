#include <stdio.h>
#include <string.h>

void printCharacters(const char *);
void incrementCharacters(char *sPtr, int n);
void decrementCharacters(char *sPtr, int n);

int main(void) {
    int n = 1;
    const int *nPtr1 = &n; // dynamic pointer with const data
    int *const nPtr2 = &n; // dynamic data with constant pointer

    *nPtr2 += 10;
    printf("%d\n", *nPtr2);



    const int m = 2;
    const int *mPtr1 = &m; // dynamic opinter with const data
    int const *mPtr2 = &m; // const data with constant pointer


}