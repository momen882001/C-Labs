/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
Lab-2 q-1

*******************************************************************************/

#include <stdio.h>

unsigned char rotate_left(unsigned char number, int rotations_number);
unsigned char rotate_right(unsigned char number, int rotations_number);

int main()
{
    unsigned char number;
    int rotations_number;
    char direction;

    printf("Enter a 8-bit number: ");
    scanf("%hhu", &number);

    printf("Enter number of rotations: ");
    scanf("%i", &rotations_number);

    printf("Select rotation direction ( L or R ) : ");
    scanf(" %c", &direction);

    if (direction == 'L')
    {
        printf("The Number is %hhu", rotate_left(number, rotations_number));
    }
    else if (direction == 'R')
    {
        printf("The Number is %hhu", rotate_right(number, rotations_number));
    }
    else
    {
        printf("please, select direction as L or R only");
    }

    return 0;
}

unsigned char rotate_left(unsigned char number, int rotations_number)
{
    return (number << rotations_number) | (number >> (8 - rotations_number));
}

unsigned char rotate_right(unsigned char number, int rotations_number)
{
    return (number >> rotations_number) | (number << (8 - rotations_number));
}
