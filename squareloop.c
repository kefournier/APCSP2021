#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

    int number = get_int("What is your number? ");

    int square;

    for (int i = 1; i <= number; i++){

        square = i * i;
        printf("%i\n", square);
    }


    int number2 = get_int("Please give me another number: ");
    //another way to write that for loop
    for (int i = 1; i <= number2; i++){

        square = pow(i, 2);
        printf("%i\n", square);
    }
}