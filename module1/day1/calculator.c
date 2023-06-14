#include <stdio.h>

int main() {
    float operand1, operand2, res;
    char operator;

    printf("Enter Number1: ");
    scanf("%f", &operand1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            res = operand1 + operand2;
            printf("The result of addition: %.4f\n", res);
            break;
        case '-':
            res = operand1 - operand2;
            printf("The result of subtraction: %.4f\n", res);
            break;
        case '*':
            res = operand1 * operand2;
            printf("The result of multiplication: %.4f\n", res);
            break;
        case '/':
            if (operand2 != 0) {
                res = operand1 / operand2;
                printf("The result of division: %.4f\n", res);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}