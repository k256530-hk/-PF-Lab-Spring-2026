#include <stdio.h>
int main() {
    float salary, bonus;
    int service;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &service);

    bonus = (service > 10) ? (0.30 * salary) :
            (service > 5)  ? (0.20 * salary) :
                             (0.10 * salary);

    printf("Bonus Amount = %.2f\n", bonus);

    return 0;
}
