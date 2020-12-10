#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

int days = 0;
long long received = 0;



    do
    {

        days = get_int("Month Days - ");

    }

    while (days < 28 || days > 31);

    do
    {
        received = get_int("Pennies First Day - ");

    }
    while (received < 1);

    for (int i = 0; i < days; i++)
    {
        received *= 2;
    }

    printf("$%.2Lf\n", (long double)received / 100);


}