#include "calc.h"

// Function definitions
int add(int a, int b) 
{
        return a + b;
}

int subtract(int a, int b) 
{
       return a - b;
}

int multiply(int a, int b) 
{
       return a * b;
}

int divide(int a, int b) {
        if (b != 0) {
                return a / b;
        } else {
                printf("Division by zero error!\n");
                return 0;
        }
}

int modulus (int a, int b)
{
        return a % b;
}

int power (int a, int b)
{
        int result = pow(a, b);
        return result;
}
