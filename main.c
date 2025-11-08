#include <stdio.h>
#include "calculator.h"

int main() {
    int num1, num2, result;
    char operator;

    // Get the user's input and figure out what numbers and what operator
    printf("Input: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Error: Unknown operator '%c'\n", operator);
            return 1;
    }

    printf("Result: %d\n", result);
    
    return 0;
}