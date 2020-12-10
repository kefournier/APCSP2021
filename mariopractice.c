#include <stdio.h>
#include <cs50.h>

int main(void){

    //Build a pyramid
    int height = get_int("How tall do you want your pyramid?: ");

        //this loop needs to be fixed?
        for(int i = 1; i <= height; i++){

            for(int j = height - i; j > 0; j--){
                printf(" ");
            }

            for(int k = 1; k <= (i + 1); k++) {
                printf("#");
            }
            printf("\n");
        }

    }



