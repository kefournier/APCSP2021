#include <stdio.h>
#include <cs50.h>

int main(void)

{
    string averagescore = ("Average score is");
    float score = get_float ("Test score 1:");
    float score1 = get_float ("Test score 2:");
    float score2 = get_float ("Test score 3:");

    float average = (score + score1 + score2)/3;

    printf ("%s is %.2f", averagescore, average);

}