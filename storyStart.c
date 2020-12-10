#include <stdio.h>
#include <cs50.h>

void storyStart(); //function declaration, before you can use the function, you need to declare it

int main(void){

storyStart();//function call
char character = get_char("Type 'N' for Nell, or type 'A' for Arlo: ");

//using characters in my conditional statements
//lets me avoid having to call in an extra string library
if (character == 'N'){
    printf("Hello, Nell! You are a beautiful Tuxedo cat. ");

    char window = get_char("Do you like to sit in the window? ");
        //the indentation here shows that these
        //statements are nested inside the previous
        //if statement
        if (window == 'Y'){
            printf("There are some mysterious happenings in the ");
            printf("neighborhood today, make sure you take notice!\n");
        }

        if (window == 'N'){
            printf("You are kind of a dull kitty. Goodbye, Nell.\n");
            //return 0 is a way for us to end a program in C
            //useful here because this story branch has ended
            return 0;
        }
}

}

//this is my function definition
//I can call the function anywhere I
//want these print statements to appear
void storyStart(){
    printf("Welcome to my story! Today I am going to take you\n ");
    printf("on an adventure! My first question is who you would\n ");
    printf("like to be in this story? You have two options: you can\n ");
    printf("be a character named Nell, or a character named Arlo.\n ");
    }