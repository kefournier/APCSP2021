#include <stdio.h>
#include <cs50.h>
#include <math.h> //need to include the math library to get the round function

int main()
{

    float hours = get_float("How many hours did you bike ride? ");
    float liters = hours * 0.5;
    int litersRounded = round(liters);

    printf("%.2f\n", liters);

    printf("The rounded number of liters is: %i\n", litersRounded);

}

