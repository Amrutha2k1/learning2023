#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int i;
    
    for (i = 0; i < n; i++) {
        int num = numbers[i];
        int smallest = 9;
        int largest = 0;
        
        // If the number is less than 0, it's not valid
        if (num < 0) {
            printf("Not Valid\n");
            continue;
        }
        
        // Extract the digits and find the smallest and largest
        while (num != 0) {
            int digit = num % 10;
            
            if (digit < smallest) {
                smallest = digit;
            }
            
            if (digit > largest) {
                largest = digit;
            }
            
            num /= 10;
        }
        
        printf("%d and %d\n", smallest, largest);
    }
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};
    
    findSmallestAndLargestDigits(n, numbers);
    
    return 0;
}