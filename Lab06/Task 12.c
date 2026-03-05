#include <stdio.h>

int main()
{
    int spaces = 50;
    int car;

    printf("Parking Lot System\n");

    while(spaces > 0)
    {
        printf("\nEnter 1 if car enters (0 to stop): ");
        scanf("%d", &car);

        if(car == 0)
        {
            break;
        }

        spaces = spaces - 1;

        printf("Car parked.\n");
        printf("Remaining spaces: %d\n", spaces);
    }

    if(spaces == 0)
    {
        printf("\nParking lot is FULL.\n");
    }
    else
    {
        printf("\nParking stopped by operator.\n");
    }

    return 0;
}
