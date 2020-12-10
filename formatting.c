#include <stdio.h> //adding libraries of code
#include <cs50.h>

int main(void){

    int age; //here we are declaring a variable of the integer data type
    float gpa;
    string name;

    age = 17; //initializing the variable with a value
    gpa = 4.5;
    name = "Nell";

    string name2 = "Ithishree";

    printf("Her name is %s\n", name);
    printf("Her name is %s\n", name2);
    printf("Nell's age is %i\n", age);
    printf("Nell's gpa is %.2f\n", gpa);

}