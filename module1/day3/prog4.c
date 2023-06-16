#include <stdio.h>

int deleteDigit(int number);

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Invalid input\n");
        return 0;
    }

    int largestNumber = deleteDigit(number);

    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}

int deleteDigit(int number) {
    int largestNumber = 0;
    int currentNumber = number;

    int divisor = 1;
    while (divisor <= currentNumber) {
        int digit = (currentNumber / divisor) % 10;
        int remainingNumber = (currentNumber / (divisor * 10)) * divisor + (currentNumber % divisor);

        if (remainingNumber > largestNumber) {
            largestNumber = remainingNumber;
        }

        divisor *= 10;
    }

    return largestNumber;
}