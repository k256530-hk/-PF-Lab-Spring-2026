#include <stdio.h>

int main() {
    int marks[4][3] = {{80, 75, 90},{60, 70, 85},{88, 92, 79},{55, 65, 70} };
    int i, j;
    printf("Total marks:\n");
    for (i = 0; i < 4; i++) {
        int total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d: %d\n", i + 1, total);
    }
    printf("Average marks of each subject:\n");
    for (j = 0; j < 3; j++) {
        int sum = 0;
        for (i = 0; i < 4; i++) {
            sum += marks[i][j];
        }
        printf("Subject %d: %.2f\n", j + 1,(float)sum / 4);
    }
    
    return 0;
}
