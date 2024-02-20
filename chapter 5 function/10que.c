#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++)
    {
        // Condition to print odd number of stars
        if (i % 2 != 0)
        {
            // Loop to print stars
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
