/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
HW Assignment

*******************************************************************************/

#include <stdio.h>

// define taylor function
float taylor_series(int exponent, int iterations_number);

int main()
{
    // define variables
    int exponent, iterations_number; // exponent = x , // iterations_number = n

    printf("Enter the exponent: ");
    scanf("%i", &exponent);

    printf("Enter the number of iterations ( after 1 term ): ");
    scanf("%i", &iterations_number);

    // result
    printf("The result is: %f", taylor_series(exponent, iterations_number));

    return 0;
}

// Taylor Series for e^x is: 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!

float taylor_series(int exponent, int iterations_number)
{
    int Numerator = 1;
    int Denominator = 1;
    float result = 1;

    for (int i = 1; i <= iterations_number; i++)
    {
        Numerator *= exponent;
        Denominator *= i;
        result += (float)Numerator / Denominator;
    }
    return result;
}
