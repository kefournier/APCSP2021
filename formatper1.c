#include <stdio.h> //this is a library file
#include <cs50.h>

int main(void){ //like the green flag in scratch

int age; //declaring an integer variable called age
float gpa;
string name;

age = 17;
gpa = 4.5;
name = "Nell";

//printing a string variable in the %s spot
//the string that prints should be the value
//of the variable name
printf("Her name is %s\n", name);

printf("Her gpa is %.2f\n", gpa);

printf("Her age is %i\n", age);

}