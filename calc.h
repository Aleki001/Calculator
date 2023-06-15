#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

// Struct definition for arithmetic operation
typedef struct {
        int (*operation)(int, int);
        char operator;
} ArithmeticOperation;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);




#endif