#include <stdio.h>

int bit_operations(int num, int oper_type);

int main() {
    int integer, oper_type;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &integer);

    printf("Enter the operation type (1: Set 1st bit, 2: Clear 31st bit, 3: Toggle 16th bit): ");
    scanf("%d", &oper_type);

    int res = bit_operations(integer, oper_type);

    printf("Result is: %d\n", res);

    return 0;
}

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1; 
            break;
        case 2:
            num &= ~(1 << 31); 
            break;
        case 3:
            num ^= 1 << 16;  
            break;
        default:
            printf("Error: Invalid operation type\n");
            return -1;
    }

    return num;
}