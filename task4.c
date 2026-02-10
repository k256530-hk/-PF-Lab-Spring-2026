#include <stdio.h>

int main() {
    char c1, c2, c3, c4, c5;
    int password;

    printf("Enter username: ");
    scanf(" %c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);

    printf("Enter password: ");
    scanf("%d", &password);

    if (c1 == 'a' && c2 == 'd' && c3 == 'm' && c4 == 'i' && c5 == 'n' && password == 1234) {
        printf("Login Successful\n");
    } else {
        printf("Invalid Credentials\n");
    }

    return 0;
}
