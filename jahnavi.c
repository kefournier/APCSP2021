#include <stdio.h>
#include <cs50.h>

//declaring the function
int multiply_by_2 (int user_number);

//defining the function
int multiply_by_2 (int user_number){

    int total = user_number*2;
    //need to return a value because your
    //function header included the word int
    //means an integer value should be
    //returned by the function
    return total;
}

/*what I want the program to do:
    1. the function takes in a number from the user
    2. the function multiplies it by 2
    3. the function returns the product


*/


int main (){
    int theirNumber = get_int("Enter number: ");
    //calling the function using the user input
    //as the parameter
    int theProduct = multiply_by_2(theirNumber);

    printf("%i\n", theProduct);


}