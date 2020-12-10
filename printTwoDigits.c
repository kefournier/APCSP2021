#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void printTwoDigits(int n);

int main(void){

    int x = 4;

    // Use current time as
    // seed for random generator
    srand(time(0));

    printTwoDigits(4);

}

void printTwoDigits(int n){
    int random;
    int count = 0;

    for (int i = 0; i < n; i++){
      random = (rand() % 10) + 10;
      printf("%i\n", random);

        if (random == 13){
            count++;
            //printf("The number 13 appeared!\n");
        }
    }

    if (count > 0){
            printf("The number 13 appeared!\n");
        }
        else {
            printf("The number 13 did not appear.\n");
        }
}