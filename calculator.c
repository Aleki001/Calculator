#include "calc.h"

int main() {
        int num1, num2;
        char operator;

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        ArithmeticOperation operations[] = {
                {add, '+'},
                {subtract, '-'},
                {multiply, '*'},
                {divide, '/'}
        };

        ArithmeticOperation *selectedOperation = NULL;

        // Find the selected arithmetic operation based on the operator entered
        for (int i = 0; i < sizeof(operations) / sizeof(operations[0]); i++) {
                if (operations[i].operator == operator) {
                        selectedOperation = &operations[i];
                        break;
                }
        }

        // Check if a valid operation was found
        if (selectedOperation == NULL) {
                printf("Invalid operator!\n");
                return 1;
        }

        // Perform the calculation using the selected operation
        int result = selectedOperation->operation(num1, num2);
        printf("Result: %d\n", result);

        return 0;
}

// Function definitions
int add(int a, int b) {
        return a + b;
}

int subtract(int a, int b) {
        return a - b;
}

int multiply(int a, int b) {
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
