#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("What is the number? ");

    switch(x){
        case 5:
            printf("Five, ");
        case 4:
            printf("Four, ");
        case 3:
            printf("Three, ");
        case 2:
            printf("Two, ");
        case 1:
            printf("One, ");
        default:
            printf("Blast-off!\n");
    }

}