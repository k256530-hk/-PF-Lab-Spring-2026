#include <stdio.h>

int main() {
    int temp[7][3] = {{22, 35, 28},
        {21, 36, 27},{23, 34, 29},
        {20, 37, 26}, {24, 35, 30},
        {22, 33, 27},{21, 36, 28} };
    
    int i, j;
    int highest = temp[0][0];
    
    for (i = 0; i < 7; i++)
        for (j = 0; j < 3; j++)
            if (temp[i][j] > highest)
                highest = temp[i][j];
    
    printf("Highest temperature in the week: %d\n", highest);
printf("Average temperature each day:\n");
    for (i = 0; i < 7; i++) {
        int sum = 0;
        for (j = 0; j < 3; j++)
            sum += temp[i][j];
        printf("%d,",sum / 3);
    }
    
    return 0;
}
