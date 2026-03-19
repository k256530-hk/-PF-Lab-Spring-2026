#include <stdio.h>

int main() {
    int seats[5][6] = {{1, 0, 1, 1, 0, 1},{0, 0, 1, 0, 1, 1},{1, 1, 1, 0, 0, 0},{0, 1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1, 1}};
        
    int available = 0;
    int maxbooked = -1, maxrow = -1;
    
    for (int i = 0; i < 5; i++) {
        int rowbooked = 0;
        for (int j = 0; j < 6; j++) {
            if (seats[i][j] == 0)
                available++;
            else
                rowbooked++;
        }
        if (rowbooked > maxbooked) {
            maxbooked = rowbooked;
            maxrow = i + 1;
        }
    }
    printf("Available seats: %d\n", available);
    printf("Row with maximum booked seats: %d\n", maxrow);
    
    return 0;
}
