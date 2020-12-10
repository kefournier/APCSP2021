#include <stdio.h>
#include <cs50.h>

int main(void){

    int x = get_int("What is the first number? ");
    int y = get_int("What is the second number? ");

    if (x > 2 && y > 3){
        printf("This is true!\n");
    }
    if (x < 4 && y < 5){
        printf("This is true too!\n");
    }
    if (x < 4 || y > 6){
        printf("This is also true!\n");
    }
    else {
        printf("Not true :(\n");
    }
}