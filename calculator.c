#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result = 0; // Initialize result to 0
    
    printf("Enter an operator (+, -, /, *): ");
    scanf(" %c", &operator); // Note the space before %c to consume any newline character
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 0; // Exit the program after printing the error
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 0; // Exit the program after printing the error
    }

    // Print the result only if it's a valid calculation
    printf("Result: %.2lf\n", result);

    return 0;
}
