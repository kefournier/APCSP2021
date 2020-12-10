#include <stdio.h> //calling in libraries of code I can use
#include <cs50.h> // .h means header file which is a library
#include <string.h> // .h means header file which is a library

void storyStart(); //function declaration, a function is a reusable block of code

int main(void){ //like green flag in Scratch

storyStart();//calling function, you can use the function as many time as you want

char character = get_char("Type 'Y' for Yes, or type 'N' for No: ");

if (character == 'Y'){
    printf("A step in the right direction! Good job! You have decided to complete your math homework and you finish on schedule.");

    char assignment = get_char(" Would you like to start your next assignment?");

        if (assignment == 'Y'){
            printf("Awesome! You decide to do your science homework and you finish AHEAD of schedule!\n");
            printf("Now you have some extra time!\n");
        }

        else{
            printf("That's too bad! You decide to quit after finishing only one assignment and\n");
            printf("you end up wasting time on your phone. Now you are behind and stressed.\n");
            printf("Do you want to get back to work?\n");

        }
    }


    if (character == 'N'){

    printf("Bad idea! You have decided to start watching your favorite show, the Office, on Netflix instead\n");
    printf("of doing homework. Now you are behind.");

        char started = get_char("Do you want to get started?");
            //return 0 will end your program!
            return 0;
        }
}

//defining function here
void storyStart(){
    printf("Welcome to Last Minute Homework Adventure.\n");
    printf("You've decided to slack off for the past week. Now, all of your assignments\n ");
    printf("have piled up, and they are due TOMORROW. You must prepare for your exams as well (that you haven't studied for).\n");
    printf("Will you make the right time management choices to be successful in completing your assignments?\n ");
    printf("Let's get started! First, you must do your math homework. You have two options: you can\n");
    printf("start the homework or watch Netflix. Would you like to start the homework? Enter Y or N.\n");
    }