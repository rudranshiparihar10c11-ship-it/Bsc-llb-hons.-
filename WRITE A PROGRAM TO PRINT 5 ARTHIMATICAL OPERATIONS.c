
#include <stdio.h>

int main() {
    int a, b;


    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("\nResults of Arithmetic Operations:\n");
    printf("1. Addition: %d + %d = %d\n", a, b, a + b);
    printf("2. Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("3. Multiplication: %d * %d = %d\n", a, b, a * b
);
    printf("4. Division: %d / %d = %d\n", a, b, a / b);
    return 0;
}
