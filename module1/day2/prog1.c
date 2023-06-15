#include <stdio.h>

int main() {
    double x ;
    scanf("%lf",&x);
    unsigned long long *exponentPtr = (unsigned long long*)&x;
    unsigned long long exponent = (*exponentPtr & 0x7FF0000000000000ULL) >> 52;

    printf("Number: %lf\n", x);

    // Printing exponent of hexadecimal
    printf("Exponent (Hexadecimal): 0x%llx\n", exponent);

    // Printing exponent of binary
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--) {
        printf("%llu", (exponent >> i) & 1ULL);
    }
    printf("\n");

    return 0;
}
