#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("What is the number? ");

    int y = (x > 10) ? 5 : 6;

    printf("y is %i\n", y);

}