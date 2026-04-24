#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, x1, x2, r, i;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
        return 1;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots:\n");
        printf("  x1 = %.4lf\n", x1);
        printf("  x2 = %.4lf\n", x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("One repeated real root:\n");
        printf("  x = %.4lf\n", x1);
    } else {
        r = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
        printf("Two complex roots:  x1 = %.4lf + %.4lfi  ,  x2 = %.4lf - %.4lfi\n", r, i, r, i);
    }

    return 0;
}
