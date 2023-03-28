/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
Lab-2 q-3

*******************************************************************************/

#include <stdio.h>

// functions definitions
void Fibonacci(int terms);

int main()
{
    // define variable
    int terms; // refer to series terms

    // insert the series terms number
    printf("Enter the number of terms of Fibonacci series : ");
    scanf("%i", &terms);

    if (terms < 0)
    {
        printf("please , Enter positive number");
    }
    else
    {

        // print results
        Fibonacci(terms);
    }

    return 0;
}

void Fibonacci(int terms)
{
    int first = 0;
    int second = 1;
    int next;

    for (int i = 0; i < terms; i++)
    {
        if (i == 0)
        {
            printf("%d", i);
        }
        else if (i == 1)
        {
            printf(",%d", i);
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
            printf(",%d", next);
        }
    }
}
