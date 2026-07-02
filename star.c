#include<stdio.h>
#include <stdlib.h>   // for atoi()

int main(int argc, char *argv[])
{
    int i, j, rows;

    // Check whether the user provided an argument
    if (argc != 2)
    {
        printf("Usage: %s <number_of_rows>\n", argv[0]);
        return 1;
    }

    // Convert string argument to integer
    rows = atoi(argv[1]);

    // Validate input
    if (rows <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print pattern
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("ErRor : ) \n");
        }
        printf("\n");
    }

    return 0;
}
