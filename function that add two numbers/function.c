#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

/* Entry point: reads two integers from the user, then prints the result
   of all four arithmetic operations. Division is skipped if y is zero. */
int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, subtract(x, y));
    printf("%d * %d = %d\n", x, y, multiply(x, y));

    if (y != 0)
        printf("%d / %d = %.2f\n", x, y, divide(x, y));
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}

/* Returns the sum of a and b. */
int add(int a, int b) {
    return a + b;
}

/* Returns the difference of a minus b. */
int subtract(int a, int b) {
    return a - b;
}

/* Returns the product of a and b. */
int multiply(int a, int b) {
    return a * b;
}

/* Returns a divided by b as a float. Caller must ensure b != 0. */
float divide(int a, int b) {
    return (float)a / b;
}
