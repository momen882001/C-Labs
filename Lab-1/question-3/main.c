/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
Lab-1 q-3

*******************************************************************************/

#include <stdio.h>

// functions definitions
int hours(int s);
int minutes(int s);
int seconds(int s);



int main()
{
    // define variable
    int s;  // refer to seconds
    
    // insert the total time elapsed, in seconds
    printf("Enter the total time elapsed, in seconds : ");
    scanf("%i",&s);

    // print results
    printf("Hours:%i ",hours(s));
    printf("Minutes:%i ",minutes(s));
    printf("Seconds:%i ",seconds(s));

    return 0;
}

// hours function
int hours(int s) {
    return s / 3600;
}

// minutes function
int minutes(int s) {
    return (s % 3600) / 60;
}

// seconds function
int seconds(int s) {
    return (s % 3600) % 60;
}
