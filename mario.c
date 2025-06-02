#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, m, n;

    do
    {
        height = get_int("Height: ");
    }
    while ((isdigit(height)) || (height > 8) || (height < 1));

    // i is the total rows as in height
    for (i = 0; i < height; i++)
    {
        // for creating the spaces
        for (j = height - i - 1; j > 0; j--)
        {
            printf(" ");
        }

        // for creating the #'s
        for (m = 0; m <= i; m++)
        {
            printf("#");
        }

        // for creating the divider space
        printf("  ");

        // for creating the #'s again
        for (n = 0; n <= i; n++)
        {
            printf("#");
        }

        // for creating each row
        printf("\n");
    }
}
