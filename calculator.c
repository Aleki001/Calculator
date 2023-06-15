#include "calc.h"

int main() {
        while (1)
        {
                system("clear");
                printf("\t\tBasic Math Calc\n\n");
                int num1, num2;
                char operator;
                int choice;

                printf("Enter two numbers: ");
                scanf("%d %c %d", &num1, &operator, &num2);

                ArithmeticOperation operations[] = {
                        {add, '+'},
                        {subtract, '-'},
                        {multiply, '*'},
                        {divide, '/'},
                        {modulus, '%'},
                        {power, '^'}
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

                /*continue with calculations or quit*/
                printf("\n\nWish to continue?(Enter 1 to continue or 0 to quit): ");
                scanf("%d", &choice);

                if (choice == 0)
                        break;
                


        }
        return (0);
}


