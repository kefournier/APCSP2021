#include <stdio.h>
#include <cs50.h>

int main(void){

    int age = 17;
    float gpa = 4.5;
    string name = "Nell";

    printf("Her name is %s\n", name);
    printf("Her gpa if %f\n", gpa);
    printf("Her age is %i\n", age);

    printf("Her gpa is %.2f\n", gpa);
}