#include <stdio.h>
#include <cs50.h>

int main (void){
    int i;
    float sum;
    float testAverage;
    int numberOfTests = get_int("Enter the number of test you have ");
    for(i = 0; i < numberOfTests; i++){
       float testScoreInput = get_float("Enter a test score ");
       sum = testScoreInput + sum;
    }
    testAverage = sum/numberOfTests;
    printf("Your Average in is %.2f\n", testAverage);


}
