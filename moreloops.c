//Mini-labs from class (I put them
//all in one program)
#include <stdio.h>
#include <cs50.h>

int sumNumbers(int n); //declaring function
int frequencyDivide(int x, int y); //declaring function
void digits(int number); //declaring function

int main(void){

    int number = get_int("What is your number? ");

    int a = 1327;
    int b = 4542;

    int testNumber = 1234;

    //calling sumNumbers function inside print statement
    printf("%i\n", sumNumbers(number));
    //calling frequencyDivide function inside print statement
    printf("%i\n", frequencyDivide(a, b));

    //calling my digits function here
    //not putting it inside print statement
    //because by default I set it up as a void
    //function that just prints something
    digits(testNumber);
}

//these are all my function definitions
int sumNumbers(int n){

    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int frequencyDivide(int x, int y){

    int count = 0;
    for(int i = x; i <= y; i++){
        if ((i % 3 == 0) && (i % 5 != 0)){
            count++;
        }
    }
    return count;
}

//I made this one void because I
//knew I just wanted to print the numbers
//to the screen and not necessarily return
//a value
void digits(int number){

    int digit = 0;

    while(number > 0){
        digit = number % 10;
        number = number / 10;
        printf("%i\n", digit);
    }
}