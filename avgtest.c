#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

    //Getting user input on three test scores
    int test1 = get_int("First score: ");
    int test2 = get_int("Second score: ");
    int test3 = get_int("Third score: ");

    //averaging the three test scores and holding in
    //a float datatype
    float testAverage = (test1 + test2 + test3)/3;

    //using a print statement to help me check
    //the result of my testAverage equation
    printf("%.3f\n", testAverage);

    //creating a new integer variable to hold the
    //rounded value of my testAverage result
    //need to add the math.h library to the top of
    //my code in order to use the round function
    int avgGrade = round(testAverage);

    //adding another print statement to test my code
    printf("%i\n", avgGrade);

    //creating an integer variable to hold the result
    //of my mod equation. Modding by 10 should pick
    //off the last digit.
    int modNum = avgGrade % 10;

    //final print statement to see my output and test my code
    printf("%i\n", modNum);
}