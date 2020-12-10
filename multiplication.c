//calling in libraries of pre-defined code
#include <stdio.h>
#include <cs50.h>

int main(void){
    //declaring and initializing variable
    int userInput = 0;

    //do while loop to limit range of numbers user can respond
    do{
        userInput = get_int("What is your number? ");
    }
    while(userInput < 1 || userInput > 10);

    //for loop to print product of userNumber times 0 - 12
    for(int i = 0; i <= 12; i++){

        printf("%i * %i = %i\n", userInput, i, userInput*i);

    }

    int userNumber = 0;

    do{
      userNumber = get_int("Please enter a number: ");
    }
    while(userNumber < 0);

    int counter = 0;

    while (counter < userNumber){
        printf("%i\n", counter);
        counter++;
    }

}