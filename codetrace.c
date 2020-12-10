#include <stdio.h>
#include <cs50.h>

int main(void){
    //Example 1
    int count = 1;

    while (count <= 10){
        count *= 2;
    }
    count = count - 10;
 
    printf("%i\n", count);

    printf("\n");

    //Example 2
    int x = -5;

    while (x < 0){
        x++;
        printf("%i\n", x);
    }

    printf("\n");

    int count2 = 5;

    while (count2 < 100){
        count2 = count2 * 2;
    }
    count2 = count2 + 1;
    printf("%i\n", count2);

    printf("\n");

    int count3 = 0;

    for(int z = 0; z < 4; z++){

        for(int y = z; y < 4; y++){
            count3++;
        }
    }
    printf("%i\n", count3);

    printf("\n");

    int rows = 4;

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j < 5; j++){
            printf("%i ", j);
        }
       printf(" ");
    }
}