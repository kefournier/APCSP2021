//calling in libraries of pre-defined code
#include <stdio.h>
#include <cs50.h>

int main(void){
    //declaring a global variable I can use anywhere in my program
    int userNumber = 0;

    do{
        userNumber = get_int("What is your number? ");
    }
    while(userNumber < 1 || userNumber > 10);

    for(int i = 0; i <= 12; i++){
        printf("%i * %i is equal to %i\n", userNumber, i, userNumber*i);
    }

    int newNumber = 0;

    do{
        newNumber = get_int("What is your new number? ");
    }
    while(newNumber < 1);

    int counter = 0;

    //printf("%i\n", counter);

    while(counter < newNumber){
        printf("%i\n", counter);
        counter++;
    }
}