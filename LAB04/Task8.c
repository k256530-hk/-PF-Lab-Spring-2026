#include <stdio.h>
#include <math.h>

int main() {
    int ch;
    double a, b, result;

    printf("----- Scientific Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("---------------------------------\n");


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
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &a);
            result = a * a;
            printf("Square = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &a);
            result = a * a * a;
            printf("Cube = %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if (a < 0) {
                printf("Error: Square root of negative number is not allowed.\n");
            } else {
                result = sqrt(a);
                printf("Square Root = %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            result = pow(a, b);
            printf("Result = %.2lf\n", result);
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%lf", &a);
            result = fabs(a);
            printf("Absolute Value = %.2lf\n", result);
            break;

        default:
            printf("Invalid choice! Please select between 1 and 9.\n");
    }

    return 0;
}
