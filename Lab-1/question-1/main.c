/******************************************************************************

Name : Mo'men Mohamed Hussien
Sec : 2
Bn : 11
Lab-1 q-1

*******************************************************************************/

#include <stdio.h>
#include <math.h>

// functions definitions
float final_velocity(float u , float a , float t);
float distance(float u , float a , float t);

int main()
{
    // define variables
    float u , a , t;
    
    // insert velocity
    printf("Insert initial velocity (m/s) : ");
    scanf("%f",&u);
    
    // insert acceleration
    printf("Insert acceleration (m^2/s) : ");
    scanf("%f",&a);
    
    // insert time
    printf("Insert time (s) : ");
    scanf("%f",&t);
    
    // print results
    printf("Final Velocity = %f m/s \n ",final_velocity(u,a,t));
    printf("Distance = %f m \n ",distance(u,a,t));

    return 0;
}

// implement velocity function
float final_velocity(float u , float a , float t) {
    return u + (a*t);
}

// implement distance function
float distance(float u , float a , float t) {
    return (u * t) + ( 0.5 * a * pow(t,2) );
}



