#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // prompt for the size
    int n;
    do
    {
        n = get_int("Size? ");
    }
    while (n <= 0 || n > 8);
    // next is the loop

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {

            printf("#");
        }
        printf("\n");
    }
}
