#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("What is the number? ");

    switch(x){
        case 1:
            printf("One!\n");
            break;
        case 2:
            printf("Two!\n");
            break;
        case 3:
            printf("Three!\n");
            break;
        case 4:
            printf("Sorry, don't know that one!\n");
            break;
    }

}