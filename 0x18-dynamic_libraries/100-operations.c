#include <stdio.h>

/**
 * Function to add two integers
 */
int add(int a, int b) {
    return a + b;
}

/**
 * Function to subtract two integers
 */
int sub(int a, int b) {
    return a - b;
}

/**
 * Function to multiply two integers
 */
int mul(int a, int b) {
    return a * b;
}

/**
 * Function to divide two integers
 */
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
}

/**
 * Function to calculate the modulo of two integers
 */
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
}