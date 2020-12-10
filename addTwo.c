#include <cs50.h>
#include <stdio.h>

//declaring a function, lets the compiler know
//a function will be used and defined later in the code
int add_two_ints(int a, int b);

int main(void){

    int x = get_int("Give me an integer: ");
    int y = get_int("Give me another integer: ");

    //passing in actual parameters of x and y
    //the data types of your formal and actual parameters have to match
    int z = add_two_ints(x, y); //this is the function call

    printf("The sum of %i and %i is %i.\n", x,  y, z);

}

//int a and int b are formal parameters
int add_two_ints(int a, int b){
    int sum = a + b;
    return sum;
}