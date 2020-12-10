#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int past(int hrs, int min, int sec);

int main(int argc, string argv[]){

int hours = 0;
int minutes = 0;
int seconds = 0;

do{
hours = get_int("Hours: ");
}
while (hours < 0 || hours > 23);

do{
minutes = get_int("Minutes: ");
}
while (minutes < 0 || minutes > 59);

do{
seconds = get_int("Seconds: ");
}
while (seconds < 0 || seconds > 59);





int totalMilliseconds = past(hours, minutes, seconds);

printf("Milliseconds: %i\n", totalMilliseconds);

}


int past(int hrs, int min, int sec){

    int hrsToSeconds = hrs * 3600;
    int minToSeconds = min * 60;

    int totalSeconds = hrsToSeconds + minToSeconds + sec;

    int milliseconds = totalSeconds * 1000;

    return milliseconds;
}


