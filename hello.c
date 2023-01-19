#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 7

void print_n(void);
unsigned long long int factorial(int);
unsigned long long int f_iter(int);
unsigned long fib(int);
unsigned long fib_iter(int);

int main(int argc, char *argv[]) {
    char string[5] = {'1', '2', '3', '4', '5'};
    // scanf("%9s", string);
    printf("%s", "[ ");
    for (int i = 0; i < 100000; i++) {
        printf("%c ", string[i]);
    }
    printf("%s\n", " ]");

    // printf("%zu\n", strlen(string));
}

void print_n(void) {
    static int n = 10;
    printf("n=%d\n", n++);
}

unsigned long long int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

unsigned long long int f_iter(int n) {
    unsigned long long int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

unsigned long fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

unsigned long fib_iter(int n) {
    if (n <= 1) return n;
    unsigned long a = 0;
    unsigned long b = 1;
    for (int i = 1; i < n; i++) {
        unsigned long temp = a;
        a = b;
        b += temp;
    }
    return b;
}
