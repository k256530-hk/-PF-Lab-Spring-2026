#include <stdio.h>
#include <math.h>

int main() {
    int ch;
    double a, b, result;

    printf("==Scientific Calculator==\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power (x^y)\n");
    printf("7. Logarithm (log10)\n");
    printf("8. Absolute Value\n");
    printf("9. Sine\n");
    printf("10. Cosine\n");
    printf("11. Tangent\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if (b == 0) {
                printf("Division by zero not allowed!\n");
            } else {
                result = a / b;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a < 0) {
                printf("Square root of negative number not allowed!\n");
            } else {
                result = sqrt(a);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            result = pow(a, b);
            printf("Result = %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a <= 0) {
                printf("Logarithm of zero or negative not allowed!\n");
            } else {
                result = log10(a);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%lf", &a);
            result = fabs(a);
            printf("Absolute Value = %.2lf\n", result);
            break;

        case 9:
            printf("Enter angle in radians: ");
            scanf("%lf", &a);
            result = sin(a);
            printf("Result = %.2lf\n", result);
            break;

        case 10:
            printf("Enter angle in radians: ");
            scanf("%lf", &a);
            result = cos(a);
            printf("Result = %.2lf\n", result);
            break;

        case 11:
            printf("Enter angle in radians: ");
            scanf("%lf", &a);
            result = tan(a);
            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
