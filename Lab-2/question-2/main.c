/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
Lab-2 q-2

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int blank; // refer to space after or before asterisk
    for (int row = 1; row <= 9; row++)
    {
        // adding spaces
        for (blank = 1; blank <= abs(5 - row); blank++)
        {
            printf(" ");
        }
        // adding asterisks
        for (int asterisk = 1; asterisk <= 9 - 2 * (blank - 1); asterisk++)
        {
            printf("*");
        }
        printf("\n"); // new line
    }

    return 0;
}