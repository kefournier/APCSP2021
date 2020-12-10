#include <stdio.h> //library of pre-packaged code
#include <cs50.h>

int main(void){ //like the green flag in Scratch

    int age; //declaring my variable age of the int datatype
    float gpa; //declaring my variable gpa of the float datatype
    string name; //declaring my variable name of the string datatype

    //intializing our variables
    age = 17;
    gpa = 4.5;
    name = "Nell";

    //printing the content of the name variable
    //the %s indicates a string value should be printed in that spot
    printf("Her name is %s\n", name);
    printf("Her gpa is %.2f\n", gpa);
    printf("Her age is %i\n", age);

}