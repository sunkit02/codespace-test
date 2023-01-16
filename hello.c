#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// #include <iostream>

void print_n(void);
unsigned long long int factorial(int);
unsigned long long int f_iter(int);
unsigned long fib(int);
unsigned long fib_iter(int);

int main(int argc, char *argv[]) {
    // for (int i = 0; i <= 21; i++) {
    //     printf("fib(%d) = %lu\n", i, fib(i));
    // }

    int i = atoi(argv[1]);
    // printf("fib(%d) = %lu\n", i, fib_iter(i));
    printf("factorial(%d) = %llu\n", i, f_iter(i));
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
