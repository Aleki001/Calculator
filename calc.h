#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct calculator
{
        char *operator;
        int (*func)(int number);
} calc;




#endif