/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
Lab-1 q-2

*******************************************************************************/

#include <stdio.h>
#include <math.h>

// functions definitions
int sum(int a, int b, int c);
int product(int a, int b, int c);
float average(int a, int b, int c);
int smallest(int a, int b, int c);
int largest(int a, int b, int c);

int main()
{
    // define variables
    int a, b, c;

    // insert three numbers
    printf("Enter three different integrs : ");
    scanf("%i %i %i", &a, &b, &c);

    // print results
    printf("Sum is %i\n", sum(a, b, c));
    printf("Product is %i\n", product(a, b, c));
    printf("Average is %f\n", average(a, b, c));
    printf("Smallest is %i\n", smallest(a, b, c));
    printf("Largest is %i\n", largest(a, b, c));

    return 0;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int product(int a, int b, int c)
{
    return a * b * c;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int smallest(int a, int b, int c)
{
    int small = (a < b) * a + (b <= a) * b;
    return small = (small < c) * small + (c <= small) * c;
}

int largest(int a, int b, int c)
{
    int large = (a > b) * a + (b >= a) * b;
    return large = (large > c) * large + (c >= large) * c;
}
